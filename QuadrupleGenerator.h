#ifndef GUARD_QUADRUPLE_GENERATOR
#define GUARD_QUADRUPLE_GENERATOR 
#include <stack>
#include "ProcedureDirectory.h"

using namespace std;
class QuadrupleGenerator
{
public:
	// QuadrupleGenerator(stack<string>* operationStack, stack<string>* operandStack);
	QuadrupleGenerator(ProcedureDirectory* procDir);
	QuadrupleGenerator();

	void setOperationStack(stack<string> stack);
	void setOperandStack(stack<VariableRecord> stack);

	void pushOperation(string operation);
	void pushLeftOperand(VariableRecord operand);
	void pushRightOperand(VariableRecord operand);


private:
	stack<string> operationStack;
	stack<VariableRecord> operandStack;
	ProcedureDirectory* procDir;
};
#endif