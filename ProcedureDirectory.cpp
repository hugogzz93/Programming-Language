#include "ProcedureDirectory.h"
#include "ProcedureRecord.h"
#include <algorithm>
#include <iomanip>
#include <iostream>

	ProcedureDirectory::ProcedureDirectory() {}

	void ProcedureDirectory::assignVariable(string type, string name, string value) {
		ProcedureRecord newRecord(type, name, value);
		// printf("%s   %s   %s\n", type, name, value);
		// cout << type << endl;
		procDir.push_back(newRecord);
	}

	void ProcedureDirectory::listDirectory() {
		ProcedureRecord record;
		string type, name, value;
		string::size_type typeW = 0, nameW = 0, valueW = 0;

		for (int i = 0; i < procDir.size(); ++i)
		{	
			record = procDir[i];

			type = record.getType();
			name = record.getName();
			value = record.getValue();

			typeW = max(typeW, type.length());
			nameW = max(nameW, name.length());
			valueW = max(valueW, value.length());

			cout << name << endl;

		}

		string typePad(typeW - 2, ' ');
		string namePad(nameW - 2, ' ');

		string header = "type" + typePad + "name" + namePad + "value";
		string headerPad("-", header.size());
		cout << header << endl;
		cout << headerPad;

		// cout << "DONE\n\n\n"; 

		// for (int i = 0; i < procDir.size(); ++i)
		// {
		// 	record = procDir[i];

		// 	type = record.getType();
		// 	name = record.getName();
		// 	value = record.getValue();

		// 	string typePad(" ", typeW - type.size() + 2);
		// 	string namePad(" ", nameW - name.size() + 2);
		// 	string endPad("-", header.size());

		// 	cout << type << typePad << name << namePad << value << endl;
		// 	cout << endPad << endl;
		// }
	}