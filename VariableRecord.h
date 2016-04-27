#ifndef GUARD_VARIABLE_RECORD
#define GUARD_VARIABLE_RECORD 

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class VariableRecord
{
public:
	VariableRecord(string type, string name);
	VariableRecord(string type, string name, int vAddress, string scope);
	VariableRecord();
	
	string getName();
	string getType();
	int getVAddress();
	string getScope();
	bool getConstant();

	void setName(string name);
	void setType(string type);
	void setVAddress(int vAddress);
	void setScope(string scope);
	void setConstant(bool constant);

	string expose();

private:
	string name = "undefined_name", type = "undefined_type", scope = "undefined_scope";
	int vAddress = -1;
	bool constant = false;
};

#endif