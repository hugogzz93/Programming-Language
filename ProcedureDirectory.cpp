#include "ProcedureDirectory.h"
#include "ProcedureRecord.h"
#include "VariableRecord.h"
#include <algorithm>
#include <iomanip>
#include <iostream>

	ProcedureDirectory::ProcedureDirectory() {
		ProcedureRecord main("INT", "main", parameterDir);
		procDir.push_back(main);
		scope = true;
	}

	void ProcedureDirectory::enterLocalScope() {
		scope = false;
	}

	void ProcedureDirectory::enterGlobalScope() {
		scope = true;
	}

	void ProcedureDirectory::addFunction(string type, string name) {
		ProcedureRecord newRecord(type, name, parameterDir, variableDir);
		procDir.push_back(newRecord);
		parameterDir.clear();
		variableDir.clear();
		printf("%s function added\n", name.c_str());
	}

	void ProcedureDirectory::addParameter(string type, string name) {
		VariableRecord newRecord(type, name);
		parameterDir.push_back(newRecord);
	}

	void ProcedureDirectory::addVariable(string type, string name) {
		if (scope)
		{
			procDir.front().addVariable(type, name);
			printf("Adding %s %s to %s\n", type.c_str(), name.c_str(), procDir.front().getName().c_str());
		} else {
			VariableRecord newRecord(type, name);
			variableDir.push_back(newRecord);
			printf("Adding local %s %s\n",type.c_str(), name.c_str());
		}
	}

	void ProcedureDirectory::listDirectory() {
		ProcedureRecord record;
		
		printf("\nFunction Directory\n");
		printf("----------------------------------------\n");
		for (std::vector<ProcedureRecord>::iterator functionRecord = procDir.begin(); 
										functionRecord != procDir.end(); ++functionRecord)
		{
			// printf("%s\n", i->getName().c_str());
			functionRecord->showSignature();
			cout << endl;
		}
	}