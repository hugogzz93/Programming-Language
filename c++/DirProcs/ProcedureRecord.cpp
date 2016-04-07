#include "iostream"
#include "ProcedureRecord.h"

using namespace std;
// ProcedureRecord::ProcedureRecord(string name): name(name) {};
// ProcedureRecord::ProcedureRecord() {};

string ProcedureRecord::getName() {
	return name;
}

void ProcedureRecord::setName(string name) {
	this->name = name;
}
