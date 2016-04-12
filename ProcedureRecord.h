#ifndef GUARD_PROCEDURE_RECORD
#define GUARD_PROCEDURE_RECORD 

#include <iostream>
#include <vector>
#include "VariableRecord.h"

using namespace std;
class ProcedureRecord
{
public:
	ProcedureRecord(string type, string name, vector<VariableRecord> parameterDir);
	ProcedureRecord(string type, string name, vector<VariableRecord> parameterDir, vector<VariableRecord> variableDir);
	ProcedureRecord();

	void setReturnType(string type);

	void addParameter(string type, string name);
	void addVariable(string type, string name);
	void addVariable(string type, string name, int vAddress, string scope);
	void addVariable(VariableRecord record);
	void showSignature(bool verbose = false);

	VariableRecord getVariableByName(string name);

	string getName();
	string getType();

private:
	string name, type;
	vector<VariableRecord> parameterDir;
	vector<VariableRecord> variableDir;
};
#endif