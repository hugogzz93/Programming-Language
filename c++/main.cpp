#include <iostream>
#include <unordered_map>
#include <vector>
#include "SemanticCube/SemanticCube.h"
#include "VariableRecord.h"
#include "DirProcs/ProcedureRecord.h"

using namespace std;

void insertToTable(VariableRecord& varTable);

int main(int argc, char const *argv[])
{
  SemanticCube x;
  int i;

  ProcedureRecord proc;
  proc.setName("hugo");
  cout << proc.getName() << endl;

  vector<VariableRecord> vec;

  return 0;
}

void insertToTable(VariableRecord& varTable) {
	return;
}