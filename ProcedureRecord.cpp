#include "iostream"
#include "ProcedureRecord.h"

using namespace std;

ProcedureRecord::ProcedureRecord(const string& type, const string& variable_name, const string& value): type(type), name(name), value(value) {};
ProcedureRecord::ProcedureRecord() {}

string ProcedureRecord::getName() {
	return name;
}

string ProcedureRecord::getType() {
	return type;
}

string ProcedureRecord::getValue() {
	return value;
}

void ProcedureRecord::setName(string name) {
	this->name = name;
}
