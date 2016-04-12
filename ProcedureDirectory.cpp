#include "ProcedureDirectory.h"
#include "ProcedureRecord.h"
#include "VariableRecord.h"
#include "Quadruple.h"
#include <stdexcept>
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <unordered_map>

	ProcedureDirectory::ProcedureDirectory() {
		unordered_map<string, unordered_map<string, int>> map;
		vAddressMap = map;
		addFunction("int", "main");
		scope = true;
	}

	void ProcedureDirectory::enterLocalScope() {
		scope = false;
	}

	void ProcedureDirectory::enterGlobalScope() {
		scope = true;
	}

	void ProcedureDirectory::addFunction(string type, string name) {

		vAddressMap[name] = { {"INT", 0}, {"FLOAT", 0}, {"STRING", 0} };
		assignVirtualAddresses(parameterDir, name);
		assignVirtualAddresses(variableDir, name);

		ProcedureRecord newRecord(type, name, parameterDir, variableDir);
		procDir.push_back(newRecord);

		
		parameterDir.clear();
		variableDir.clear();
		printf("%s function added\n", name.c_str());
	}

	void ProcedureDirectory::addParameter(string type, string name) {
		VariableRecord newRecord(type, name);
		parameterDir.push_back(newRecord);
	}

	void ProcedureDirectory::addVariable(string type, string name) {
		if (scope)
		{
			int vAddress = vAddressMap["main"][type]++;
			procDir.front().addVariable(type, name, vAddress, "main");
			printf("Adding %s %s to %s as %d\n", type.c_str(), name.c_str(), procDir.front().getName().c_str(), vAddress);
		} else {
			VariableRecord newRecord(type, name);
			variableDir.push_back(newRecord);
			printf("added %s %s as %s\n", type.c_str(), name.c_str(), newRecord.expose().c_str() );
		}
	}

	void ProcedureDirectory::addVariableRecord(VariableRecord record) {
		assignVirtualAddress(record);
		
		if (scope) {
			ProcedureRecord functionRecord = getFunctionByName(record.getScope());
			functionRecord.addVariable(record);
			printf("@@@@ Assigned %s %s as %s to %s\n", record.getType().c_str(), record.getName().c_str(), record.expose().c_str(), functionRecord.getName().c_str());
			
		} else {
			printf("@@@@ Assigned %s %s as %s to %s\n", record.getType().c_str(), record.getName().c_str(), record.expose().c_str(), record.getScope().c_str());
			variableDir.push_back(record);
		}
	}

	void ProcedureDirectory::listDirectory(bool verbose) {
		ProcedureRecord record;
		vector<Quadruple> functionQuadruples;
		
		printf("\nFunction Directory\n");
		printf("----------------------------------------\n");
		for (std::vector<ProcedureRecord>::iterator functionRecord = procDir.begin(); 
										functionRecord != procDir.end(); ++functionRecord)
		{
			// printf("%s\n", i->getName().c_str());
			functionRecord->showSignature(verbose);
			cout << "Instructions: " << endl;
			functionQuadruples = quadrupleMap[functionRecord->getName()];
			for (std::vector<Quadruple>::iterator quadruple = functionQuadruples.begin(); quadruple != functionQuadruples.end(); ++quadruple)
			{
				cout << *quadruple << endl;
			}
			cout << endl;
		}


	}

	void ProcedureDirectory::assignVirtualAddresses(vector<VariableRecord> &vec, string name) {
		int vAddress;

		for (std::vector<VariableRecord>::iterator varRecord = vec.begin(); varRecord != vec.end(); ++varRecord)
		{
			vAddress = vAddressMap[name][varRecord->getType()]++;
			varRecord->setVAddress(vAddress);
			varRecord->setScope(name);	
		}
	}

	void ProcedureDirectory::assignVirtualAddress(VariableRecord& record) {
		int vAddress = vAddressMap[record.getScope()][record.getType()]++;
		record.setVAddress(vAddress);

	}

	VariableRecord& ProcedureDirectory::getVariableByName(string name, string scope) {
			ProcedureRecord function = getFunctionByName(scope);
			VariableRecord varRecord = function.getVariableByName(name);
			return varRecord;
	}

	void ProcedureDirectory::addQuadruple(const Quadruple& quad, string scope) {
		quadrupleMap[scope].push_back(quad);
	}

	VariableRecord& ProcedureDirectory::getVariableForFutureFunc(string name) {

		if (scope)
		{
			VariableRecord record =  procDir.front().getVariableByName(name);
			return record;

		}
		for (std::vector<VariableRecord>::iterator record = variableDir.begin(); record != variableDir.end(); ++record)
		{	
			if (record->getName() == name)
			{
				return *record;
			}
		}
		for (std::vector<VariableRecord>::iterator record = parameterDir.begin(); record != parameterDir.end(); ++record)
		{	
			if (record->getName() == name)
			{
				return *record;
			}
		}

		throw invalid_argument("Variable " + name + " not found ProcedureDirectory::getVariableForFutureFunc - ");
	}

	VariableRecord& ProcedureDirectory::getParameterForFutureFunc(string name) {
		for (std::vector<VariableRecord>::iterator record = parameterDir.begin(); record != parameterDir.end(); ++record)
		{
			if (record->getName() == name)
			{
				return *record;
			}
		}

		throw invalid_argument("Variable" + name + " not found");

	}

	ProcedureRecord& ProcedureDirectory::getFunctionByName(string name) {
		for (std::vector<ProcedureRecord>::iterator function = procDir.begin(); function != procDir.end(); ++function)
		{
			if (function->getName() == name)
			{
				return *function;
			}
		}

		throw invalid_argument("Scope not " + name + " found");
	}

	vector<VariableRecord>& ProcedureDirectory::getVariableDir() {
		return variableDir;
	}

	vector<VariableRecord>& ProcedureDirectory::getParameterDir() {
		return parameterDir;
	}