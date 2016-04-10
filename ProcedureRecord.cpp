#include "iostream"
#include "ProcedureRecord.h"
#include "VariableRecord.h"

using namespace std;

ProcedureRecord::ProcedureRecord(string type, string name, vector<VariableRecord> parameterDir): type(type), name(name), parameterDir(parameterDir) {}
ProcedureRecord::ProcedureRecord() {}

void ProcedureRecord::setReturnType(string type) {
	this->type = type;
}

void ProcedureRecord::addParameter(string type, string name) {
	bool repeatedName = false;

	for (std::vector<VariableRecord>::iterator varRecord = parameterDir.begin(); varRecord != parameterDir.end(); ++varRecord)
	{
		if (name == varRecord->getName())
		{
			repeatedName = true;
		}
	}

	if (!repeatedName)
	{
		VariableRecord newRecord(type, name);
		parameterDir.push_back(newRecord);
	}
}

void ProcedureRecord::addVariable(string type, string name) {
	bool repeatedName = false;

	for (std::vector<VariableRecord>::iterator varRecord = variableDir.begin(); varRecord != variableDir.end(); ++varRecord)
	{
		if (name == varRecord->getName())
		{
			repeatedName = true;
		}
	}

	if (!repeatedName)
	{
		VariableRecord newRecord(type, name);
		variableDir.push_back(newRecord);
	}
}

void ProcedureRecord::showSignature() {
	printf("%s %s (", type.c_str(), name.c_str());
	for (std::vector<VariableRecord>::iterator i = parameterDir.begin(); i != parameterDir.end(); ++i)
	{
		printf("%s %s, ", i->getType().c_str(), i->getName().c_str());
	}
	printf(")\n");

	for (std::vector<VariableRecord>::iterator varRecord = variableDir.begin(); varRecord != variableDir.end(); ++varRecord)
	{
		printf("\t%s %s\n", varRecord->getType().c_str(), varRecord->getName().c_str());
	}
}

string ProcedureRecord::getName() {
	return name;
}

string ProcedureRecord::getType() {
	return type;
}




// void ProcedureRecord::listDirectory() {
// 		VariableRecord record;
// 		string type, name, value;
// 		string::size_type typeW = 4, nameW = 4, valueW = 4;

// 		for (int i = 0; i < variableDir.size(); ++i)
// 		{	
// 			record = variableDir[i];

// 			type = record.getType();
// 			name = record.getName();
// 			value = record.getValue();

// 			typeW = max(typeW, type.length());
// 			nameW = max(nameW, name.length());
// 			valueW = max(valueW, value.length());

// 		}

// 		string typePad(typeW - 2, ' ');
// 		string namePad(nameW - 2, ' ');

// 		string header = "\n\ntype" + typePad + "name" + namePad + "value";
// 		string headerPad(header.size(), '-');
// 		cout << header << endl;
// 		cout << headerPad << endl;


// 		for (int i = 0; i < variableDir.size(); ++i)
// 		{
// 			record = variableDir[i];

// 			type = record.getType();
// 			name = record.getName();
// 			value = record.getValue();

// 			string typePad(typeW - type.size() + 2, ' ');
// 			string namePad(nameW - name.size() + 2, ' ');

// 			cout << type << typePad << name << namePad << value << endl;
// 		}
	
// 		string endPad(header.size(), '-');
// 		cout << endPad << endl;

// }