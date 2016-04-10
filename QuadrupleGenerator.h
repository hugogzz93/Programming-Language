#ifndef GUARD_QUADRUPLE_GENERATOR
#define GUARD_QUADRUPLE_GENERATOR 
#include <stack>
#include "VariableRecord.h"

using namespace std;
class QuadrupleGenerator
{
public:
	// QuadrupleGenerator(stack<string>* operationStack, stack<string>* operandStack);
	QuadrupleGenerator();

	void setOperationStack(stack<string> stack);
	void setOperandStack(stack<VariableRecord> stack);

	void pushOperation(string operation);
	void pushLeftOperand(VariableRecord operand);
	void pushRightOperand(VariableRecord operand);


private:
	stack<string> operationStack;
	stack<VariableRecord> operandStack;

	int intCounter, floatCounter, stringCounter;

};
#endif