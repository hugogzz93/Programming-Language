#ifndef GUARD_PROCEDURE_DIRECTORY
#define GUARD_PROCEDURE_DIRECTORY 

#include <iostream>
#include <vector>
#include "ProcedureRecord.h"
#include "VariableRecord.h"

using namespace std;
class ProcedureDirectory
{

public:
	ProcedureDirectory();

	void enterLocalScope();
	void enterGlobalScope();
	void addFunction(string type, string name);
	void addParameter(string type, string name);
	void addVariable(string type, string name);
	void listDirectory();

private:
	bool scope; //true = global
	vector<ProcedureRecord> procDir;

	// temporal signature storage for functions
	std::vector<VariableRecord> parameterDir;
};
#endif