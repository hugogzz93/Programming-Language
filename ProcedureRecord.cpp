#include "iostream"
#include "ProcedureRecord.h"

using namespace std;

ProcedureRecord::ProcedureRecord(string type, string name, string value): type(type), name(name), value(value) {}

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
