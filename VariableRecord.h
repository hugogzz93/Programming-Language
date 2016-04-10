#ifndef GUARD_VARIABLE_RECORD
#define GUARD_VARIABLE_RECORD 

#include <iostream>
#include <vector>

using namespace std;
class VariableRecord
{
public:
	VariableRecord(string type, string name);
	VariableRecord();
	
	string getName();
	string getType();

	void setName(string name);
	void setType(string type);

private:
	string name, type;
};

#endif