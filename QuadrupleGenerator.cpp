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
	procDir->setCurrentScope(scope);
}

void QuadrupleGenerator::setVarFlag(int flag) {
	this->varFlag = flag;
}

void QuadrupleGenerator::pushOperation(string operation) {
	operationStack.push(operation);
}

void QuadrupleGenerator::pushLeftOperand(string operand) {
	VariableRecord lOperand, *lOperandP;
	lOperand.setName(operand);
	
	switch(varFlag) {
		case fINT:
			lOperand.setType("INT");
			lOperand.setScope(getCurrentScope());
			lOperand.setName("CTE-" + operand);
			lOperand = procDir->addVariableRecord(lOperand);
			operandStack.push(lOperand);
			break;

		case fFLOAT:
			lOperand.setType("FLOAT");
			lOperand.setScope(getCurrentScope());
			lOperand.setName("CTE-" + operand);
			lOperand = procDir->addVariableRecord(lOperand);
			operandStack.push(lOperand);
			break;

		case fSTRING:
			lOperand.setType("STRING");
			lOperand.setScope(getCurrentScope());
			lOperand.setName("CTE-" + operand);
			lOperand = procDir->addVariableRecord(lOperand);
			operandStack.push(lOperand);
			break;

		case fID:
			try{
				if (currentScope == "main")
				{
					lOperandP = procDir->getVariableByName(operand, "main");
				} else {
					lOperandP = procDir->getVariableForFutureFunc(operand);
				}
				operandStack.push(*lOperandP);
			} catch(invalid_argument& e) {
				cerr << e.what() << " on QuadrupleGenerator::pushLeftOperand "<< endl;
				throw(invalid_argument(""));
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
	VariableRecord rOperand, lOperand, *rOperandP;
	rOperand.setName(operand);
	rOperand.setScope(getCurrentScope());
	printf("received Right operand %s\n", operand.c_str());

	switch(varFlag) {
		case fINT:
			// VariableRecord rOperand("INT", operand);
			rOperand.setType("INT");
			rOperand.setName("CTE-" + operand);
			rOperand = procDir->addVariableRecord(rOperand);
			lOperand = operandStack.top();
			operandStack.pop();
			operation = operationStack.top();
			operationStack.pop();
			generateOperationQuadruple(operation, lOperand, rOperand);
			break;

		case fFLOAT:
			// VariableRecord rOperand("FLOAT", operand);
			rOperand.setType("FLOAT");
			rOperand.setName("CTE-" + operand);
			rOperand = procDir->addVariableRecord(rOperand);
			lOperand = operandStack.top();
			operandStack.pop();
			operation = operationStack.top();
			operationStack.pop();
			generateOperationQuadruple(operation, lOperand, rOperand);
			break;

		case fSTRING:
			// VariableRecord rOperand("STRING", operand);
			rOperand.setType("STRING");
			rOperand.setName("CTE-" + operand);
			rOperand = procDir->addVariableRecord(rOperand);
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
					printf("in main scope\n");
					rOperandP = procDir->getVariableByName(operand, "main");
					printf("found %s as %s\n", rOperandP->getName().c_str(), rOperandP->expose().c_str());
				} else {
					printf("in %s scope\n", getCurrentScope().c_str());					
					rOperandP = procDir->getVariableForFutureFunc(operand);
					printf("found %s as %s\n", rOperandP->getName().c_str(), rOperandP->expose().c_str());
				}
				VariableRecord lOperand = operandStack.top();
				operandStack.pop();
				string operation = operationStack.top();
				operationStack.pop();
				generateOperationQuadruple(operation, lOperand, *rOperandP);
			} catch(invalid_argument& e) {
				cerr << e.what() << " on QuadrupleGenerator::pushRightOperand "<< endl;
				throw(invalid_argument(""));
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

void QuadrupleGenerator::generateOperationQuadruple(string& op, VariableRecord& lOp, VariableRecord& rOp) {

	printf("\n@@@@@\ngenerating Quad received: %s %s %s\n@@@@@@\n", op.c_str(), lOp.expose().c_str(), rOp.expose().c_str() );

	VariableRecord temp(semanticCube.getResult(op, lOp.getType(), rOp.getType()), 
												"temp_" + lOp.getName() + "_" + rOp.getName());

	temp.setScope(getCurrentScope());
	temp = procDir->addVariableRecord(temp);
	// procDir->updateVariableRecord(lOp);
	// procDir->updateVariableRecord(rOp);

	Quadruple instruction(op, lOp.expose(), rOp.expose(), temp.expose());
	procDir->addQuadruple(instruction, getCurrentScope());

	printf("Generating quad for %s\n", getCurrentScope().c_str());
}