#include <stack>
#include <stdexcept>
#include "QuadrupleGenerator.h"
#include "ProcedureDirectory.h"
#include "SemanticCube.h"
#include "Quadruple.h"
using namespace std;

// QuadrupleGenerator::QuadrupleGenerator(stack<string> operationStack, stack<VariableRecord> operandStack):
QuadrupleGenerator::QuadrupleGenerator(ProcedureDirectory* procDir, const SemanticCube& semanticCube): 
		procDir(procDir), semanticCube(semanticCube), currentScope("main") {}

QuadrupleGenerator::QuadrupleGenerator(): procDir(NULL) {}

void QuadrupleGenerator::setOperationStack(stack<string> stack) {
	operationStack = stack;
}

void QuadrupleGenerator::setOperandStack(stack<VariableRecord> stack) {
	operandStack = stack;
}

void QuadrupleGenerator::setCurrentScope(string scope) {
	this->currentScope = scope;
}

void QuadrupleGenerator::setVarFlag(int flag) {
	this->varFlag = flag;
}

void QuadrupleGenerator::pushOperation(string operation) {
	operationStack.push(operation);
}

void QuadrupleGenerator::pushLeftOperand(string operand) {
	VariableRecord lOperand;
	lOperand.setName(operand);
	
	switch(varFlag) {
		case fINT:
			lOperand.setType("INT");
			lOperand.setScope(getCurrentScope());
			operandStack.push(lOperand);
			break;

		case fFLOAT:
			lOperand.setType("FLOAT");
			lOperand.setScope(getCurrentScope());
			operandStack.push(lOperand);
			break;

		case fSTRING:
			lOperand.setType("STRING");
			lOperand.setScope(getCurrentScope());
			operandStack.push(lOperand);
			break;

		case fID:
			try{
				if (currentScope == "main")
				{
					lOperand = procDir->getVariableByName(operand, "main");
				} else {
					lOperand = procDir->getVariableForFutureFunc(operand);
				}
				operandStack.push(lOperand);
			} catch(invalid_argument& e) {
				cerr << e.what() << " on QuadrupleGenerator::pushLeftOperand "<< endl;
			}
			break;

		case fOP: 
			break;

		case fFUNC:
			break;
	}
}

void QuadrupleGenerator::pushRightOperand(string operand) {
	string operation;
	VariableRecord rOperand, lOperand;
	rOperand.setName(operand);
	rOperand.setScope(getCurrentScope());

	switch(varFlag) {
		case fINT:
			// VariableRecord rOperand("INT", operand);
			rOperand.setType("INT");
			lOperand = operandStack.top();
			operandStack.pop();
			operation = operationStack.top();
			operationStack.pop();
			generateOperationQuadruple(operation, lOperand, rOperand);
			break;

		case fFLOAT:
			// VariableRecord rOperand("FLOAT", operand);
			rOperand.setType("FLOAT");
			lOperand = operandStack.top();
			operandStack.pop();
			operation = operationStack.top();
			operationStack.pop();
			generateOperationQuadruple(operation, lOperand, rOperand);
			break;

		case fSTRING:
			// VariableRecord rOperand("STRING", operand);
			rOperand.setType("STRING");
			lOperand = operandStack.top();
			operandStack.pop();
			operation = operationStack.top();
			operationStack.pop();
			generateOperationQuadruple(operation, lOperand, rOperand);
			break;

		case fID:
			try{
				if (currentScope == "main")
				{
					rOperand = procDir->getVariableByName(operand, "main");
				} else {
					rOperand = procDir->getVariableForFutureFunc(operand);
				}
				VariableRecord lOperand = operandStack.top();
				operandStack.pop();
				string operation = operationStack.top();
				operationStack.pop();
				generateOperationQuadruple(operation, lOperand, rOperand);
			} catch(invalid_argument& e) {
				cerr << e.what() << " on QuadrupleGenerator::pushRightOperand "<< endl;
			}
			break;

		case fOP: 
			rOperand = operandStack.top();
			operandStack.pop();

			lOperand = operandStack.top();
			operandStack.pop();

			operation = operationStack.top();
			operationStack.pop();

			generateOperationQuadruple(operation, lOperand, rOperand);
			break;

		case fFUNC:
			break;
	}
}

int QuadrupleGenerator::getVarFlag() {
	return varFlag;
}

string QuadrupleGenerator::getCurrentScope() {
	return currentScope;
}

void QuadrupleGenerator::generateOperationQuadruple(string op, VariableRecord lOp, VariableRecord rOp) {
	// printf("@@@@ result for %s %s %s is %s\n", lOp.getType().c_str(), op.c_str(), rOp.getType().c_str(), semanticCube.getResult(op, lOp.getType(), rOp.getType()).c_str());
	VariableRecord temp(semanticCube.getResult(op, lOp.getType(), rOp.getType()), 
												"temp_" + lOp.getName() + "_" + rOp.getName());
	temp.setScope(getCurrentScope());
	procDir->addVariableRecord(temp);

	Quadruple instruction(op, lOp.expose(), rOp.expose(), temp.expose());
	procDir->addQuadruple(instruction, getCurrentScope());

	printf("Generating quad for %s\n", getCurrentScope().c_str());
}