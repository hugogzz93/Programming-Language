#ifndef GUARD_QUADRUPLE_GENERATOR
#define GUARD_QUADRUPLE_GENERATOR 
#include <stack>
#include <unordered_map>
#include "ProcedureDirectory.h"
#include "SemanticCube.h"
#include "Quadruple.h"

using namespace std;
class QuadrupleGenerator
{
public:
	// QuadrupleGenerator(stack<string>* operationStack, stack<string>* operandStack);
	QuadrupleGenerator(ProcedureDirectory* procDir, const SemanticCube& cube);
	QuadrupleGenerator();

	void setOperationStack(stack<string> stack);
	void setOperandStack(stack<VariableRecord> stack);
	void setCurrentScope(string scope);
	void setVarFlag(int flag);

	void pushOperation(string operation);
	void pushLeftOperand(string operand);
	void pushRightOperand(string operand);
	void pushJumpStack(int index);
	int popJumpStack();

	void startConditional();
	void finishConditionalChain();
	void finishConditional();
	void startConditionElse();

	void executeMutation();
	void finishMutationChain();

	void executeOperation();

	void variableAssignment(string id, string operand);

	int getVarFlag();
	string getCurrentScope();

	const enum {
		fINT, fFLOAT, fSTRING, fID, fOP, fFUNC
	};

private:
	string currentScope;
	stack<string> operationStack;
	stack<VariableRecord> operandStack;
	stack<int> jumpStack;
	ProcedureDirectory* procDir;
	SemanticCube semanticCube;
	unordered_map<string, Quadruple> instructions;

	//signals class what type of variable it will receive next
	int varFlag;

	void generateOperationQuadruple(string& op, VariableRecord& lOp, VariableRecord& rOp);
	void generateAssignmentQuadruple(VariableRecord& lOp, VariableRecord& rOp);
	void generateGotoQuadruple();
	void generateGotoCondQuadruple(VariableRecord evaluated);
	void finishLastJump();

};
#endif