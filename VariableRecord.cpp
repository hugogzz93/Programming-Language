#include "iostream"
#include "VariableRecord.h"

using namespace std;

VariableRecord::VariableRecord(string type, string name): type(type), name(name) {}
VariableRecord::VariableRecord() {}

string VariableRecord::getName() {
	return name;
}

string VariableRecord::getType() {
	return type;
}

void VariableRecord::setType(string type) {
	this->type = type;
}

void VariableRecord::setName(string name) {
	this->name = name;
}
