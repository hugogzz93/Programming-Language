#include "ProcedureDirectory.h"
#include "ProcedureRecord.h"
	ProcedureDirectory::ProcedureDirectory() {}

	void ProcedureDirectory::assignVariable(const string& type, const string& variable_name, const string& value) {
		ProcedureRecord newRecord(type, variable_name, value);
		procDir.push_back(newRecord);
	}

	void ProcedureDirectory::listDirectory() {
		ProcedureRecord record;

		for (int i = 0; i < procDir.size(); ++i)
		{	
			record = procDir[i];
			cout << record.getType() << " " << record.getName() << " " << record.getValue() << endl;
		}
	}