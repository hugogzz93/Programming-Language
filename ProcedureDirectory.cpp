#include "ProcedureDirectory.h"
#include "ProcedureRecord.h"
#include <algorithm>
#include <iomanip>
#include <iostream>

	ProcedureDirectory::ProcedureDirectory() {}

	void ProcedureDirectory::assignVariable(string type, string name, string value) {
		ProcedureRecord newRecord(type, name, value);
		procDir.push_back(newRecord);
	}

	void ProcedureDirectory::listDirectory() {
		ProcedureRecord record;
		string type, name, value;
		string::size_type typeW = 4, nameW = 4, valueW = 4;

		for (int i = 0; i < procDir.size(); ++i)
		{	
			record = procDir[i];

			type = record.getType();
			name = record.getName();
			value = record.getValue();

			typeW = max(typeW, type.length());
			nameW = max(nameW, name.length());
			valueW = max(valueW, value.length());

		}

		string typePad(typeW - 2, ' ');
		string namePad(nameW - 2, ' ');

		string header = "\n\ntype" + typePad + "name" + namePad + "value";
		string headerPad(header.size(), '-');
		cout << header << endl;
		cout << headerPad << endl;


		for (int i = 0; i < procDir.size(); ++i)
		{
			record = procDir[i];

			type = record.getType();
			name = record.getName();
			value = record.getValue();

			string typePad(typeW - type.size() + 2, ' ');
			string namePad(nameW - name.size() + 2, ' ');

			cout << type << typePad << name << namePad << value << endl;
		}
	
		string endPad(header.size(), '-');
		cout << endPad << endl;

	}