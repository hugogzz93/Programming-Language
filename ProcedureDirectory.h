#ifndef GUARD_PROCEDURE_DIRECTORY
#define GUARD_PROCEDURE_DIRECTORY 

#include <iostream>
#include <vector>
#include "ProcedureRecord.h"

using namespace std;
class ProcedureDirectory
{

public:
	ProcedureDirectory();

	void assignVariable(const string& type, const string& variable_name, const string& value);
	void listDirectory();

private:
	vector<ProcedureRecord> procDir;

};
#endif