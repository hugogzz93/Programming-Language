#include <stdexcept>
#include "iostream"
#include "ProcedureRecord.h"
#include "VariableRecord.h"
#include "Quadruple.h"

using namespace std;

ProcedureRecord::ProcedureRecord(string type, string name, vector<VariableRecord> parameterDir): type(type), name(name), parameterDir(parameterDir) {}
ProcedureRecord::ProcedureRecord(string type, string name, vector<VariableRecord> parameterDir, vector<VariableRecord> variableDir): 
	type(type), name(name), parameterDir(parameterDir), variableDir(variableDir) {}
	
ProcedureRecord::ProcedureRecord() {}

void ProcedureRecord::setReturnType(string type) {
	this->type = type;
}

void ProcedureRecord::addParameter(string type, string name) {
	bool repeatedName = false;

	for (std::vector<VariableRecord>::iterator varRecord = parameterDir.begin(); varRecord != parameterDir.end(); ++varRecord)
	{
		if (name == varRecord->getName())
		{
			repeatedName = true;
		}
	}

	if (!repeatedName)
	{
		VariableRecord newRecord(type, name);
		parameterDir.push_back(newRecord);
	}
}

void ProcedureRecord::addVariable(string type, string name, int vAddress, string scope) {
	bool repeatedName = false;

	for (std::vector<VariableRecord>::iterator varRecord = variableDir.begin(); varRecord != variableDir.end(); ++varRecord)
	{
		if (name == varRecord->getName())
		{
			repeatedName = true;
		}
	}



	if (!repeatedName) {
		VariableRecord newRecord(type, name, vAddress, scope);
		variableDir.push_back(newRecord);
	}

}

void ProcedureRecord::addVariable(VariableRecord record) {
	variableDir.push_back(record);
}

void ProcedureRecord::showSignature(bool verbose) {
	printf("%s %s (", type.c_str(), name.c_str());
	for (std::vector<VariableRecord>::iterator i = parameterDir.begin(); i != parameterDir.end(); ++i)
	{
		if (verbose)
		{
			printf("%s %s (%d), ", i->getType().c_str(), i->getName().c_str(), i->getVAddress());
		} else {
			printf("%s %s, ", i->getType().c_str(), i->getName().c_str());
		}
	}
	printf(")\n");

	for (std::vector<VariableRecord>::iterator varRecord = variableDir.begin(); varRecord != variableDir.end(); ++varRecord)
	{
		if (verbose)
		{
			printf("\t%s %s (%d)\n", varRecord->getType().c_str(), varRecord->getName().c_str(), varRecord->getVAddress());
		} else {
			printf("\t%s %s\n", varRecord->getType().c_str(), varRecord->getName().c_str());
		}
	}
}

VariableRecord ProcedureRecord::getVariableByName(string name) {

	for (std::vector<VariableRecord>::iterator record = parameterDir.begin(); record != parameterDir.end(); ++record)
	{
		if (record->getName() == name)
		{
			return *record;
		}
	}

	for (std::vector<VariableRecord>::iterator record = variableDir.begin(); record != variableDir.end(); ++record)
	{
		if (record->getName() == name)
		{
			return *record;
		}
	}

	throw invalid_argument("No variable with the name " + name + " found for function " + this->name + ".");


}

string ProcedureRecord::getName() {
	return name;
}

string ProcedureRecord::getType() {
	return type;
}
