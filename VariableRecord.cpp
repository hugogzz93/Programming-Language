#include "iostream"
#include "VariableRecord.h"

using namespace std;

VariableRecord::VariableRecord(string type, string name, int vAddress, string scope):
 type(type), name(name), vAddress(vAddress), scope(scope) {}
 
VariableRecord::VariableRecord(string type, string name): type(type), name(name) {}
VariableRecord::VariableRecord() {}

string VariableRecord::getName() {
	return name;
}

string VariableRecord::getType() {
	return type;
}

int VariableRecord::getVAddress() {
	return vAddress;
}

string VariableRecord::getScope() {
	return scope;
}

void VariableRecord::setType(string type) {
	this->type = type;
}

void VariableRecord::setName(string name) {
	this->name = name;
}

void VariableRecord::setVAddress(int vAddress) {
	this->vAddress = vAddress;
	// printf("@@@@@@@@@@  %d\n", );
}

void VariableRecord::setScope(string scope) {
	this->scope = scope;
}