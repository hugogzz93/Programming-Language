#include <stack>
#include "QuadrupleGenerator.h"
#include "ProcedureDirectory.h"
using namespace std;

// QuadrupleGenerator::QuadrupleGenerator(stack<string> operationStack, stack<VariableRecord> operandStack):
QuadrupleGenerator::QuadrupleGenerator(ProcedureDirectory* procDir): procDir(procDir) {}
QuadrupleGenerator::QuadrupleGenerator(): procDir(NULL) {}

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
