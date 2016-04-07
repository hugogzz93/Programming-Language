#ifndef GUARD_VARIABLERECORD
#define GUARD_VARIABLERECORD

#include <string>
#include <iostream>

using namespace std;

class VariableRecord
{
public:
	VariableRecord(string name, string type, bool scope, string owner) : name(name), type(type), scope(scope), owner(owner) {}

private:
	string name, type, owner;
	bool scope;
};

#endif