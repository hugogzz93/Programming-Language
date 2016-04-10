#include <stack>
#include "QuadrupleGenerator.h"
#include "VariableRecord.h"

using namespace std;

// QuadrupleGenerator::QuadrupleGenerator(stack<string> operationStack, stack<VariableRecord> operandStack):
QuadrupleGenerator::QuadrupleGenerator() {
	intCounter = 0;
	floatCounter = 0;
	stringCounter = 0;
}

void QuadrupleGenerator::setOperationStack(stack<string> stack) {
	operationStack = stack;
}

void QuadrupleGenerator::setOperandStack(stack<VariableRecord> stack) {
	operandStack = stack;
}

void QuadrupleGenerator::pushOperation(string operation) {
	operationStack.push(operation);
}

void QuadrupleGenerator::pushLeftOperand(VariableRecord operand) {
	operandStack.push(operand);
}

void QuadrupleGenerator::pushRightOperand(VariableRecord operand) {
	// makes and operation in pop operationStack with pop operandStack and operand
}
