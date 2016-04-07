#ifndef GUARD_PROCEDURE_RECORD
#define GUARD_PROCEDURE_RECORD 

#include <iostream>
using namespace std;

class ProcedureRecord
{
public:
	// ProcedureRecord(string name);
	// ProcedureRecord();
	
	string getName();
	void setName(string name);

private:
	string name;
};
#endif