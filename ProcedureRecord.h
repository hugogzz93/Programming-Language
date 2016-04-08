#ifndef GUARD_PROCEDURE_RECORD
#define GUARD_PROCEDURE_RECORD 

#include <iostream>
using namespace std;

class ProcedureRecord
{
public:
	ProcedureRecord(string type, string variable_name, string value);
	ProcedureRecord();
	
	string getType();
	string getName();
	string getValue();
	
	void setName(string name);

private:
	string type, name, value;
};
#endif