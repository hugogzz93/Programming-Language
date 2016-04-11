#include "ProcedureDirectory.h"
#include "ProcedureRecord.h"
#include "VariableRecord.h"
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
			// printf("Adding %s %s to %s\n", type.c_str(), name.c_str(), procDir.front().getName().c_str());
		} else {
			VariableRecord newRecord(type, name);
			variableDir.push_back(newRecord);
			// printf("Adding local %s %s\n",type.c_str(), name.c_str());
		}
	}

	void ProcedureDirectory::listDirectory(bool verbose) {
		ProcedureRecord record;
		
		printf("\nFunction Directory\n");
		printf("----------------------------------------\n");
		for (std::vector<ProcedureRecord>::iterator functionRecord = procDir.begin(); 
										functionRecord != procDir.end(); ++functionRecord)
		{
			// printf("%s\n", i->getName().c_str());
			functionRecord->showSignature(verbose);
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