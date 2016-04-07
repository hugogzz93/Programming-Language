#ifndef GUARD_PROCEDURE_RECORD
#define GUARD_PROCEDURE_RECORD 

#include <iostream>
using namespace std;

class ProcedureRecord
{
public:
	ProcedureRecord(const string& type, const string& variable_name, const string& value);
	ProcedureRecord();
	
	string getType();
	string getName();
	string getValue();
	
	void setName(string name);

private:
	string type, name, value;
};
#endif