#ifndef GUARD_SEMANTIC_CUBE
#define GUARD_SEMANTIC_CUBE


#include <iostream>
#include <unordered_map>


class SemanticCube
{

  typedef std::unordered_map<std::string,std::string> dimThree;
  typedef std::unordered_map<std::string, dimThree> dimTwo;
  typedef std::unordered_map<std::string, dimTwo> dimOne;

public:
	dimOne getMatrix();
  std::string getResult(std::string op, std::string lOp, std::string rOp);

private:

  //int
  dimThree intInt = {
  	{"+", "INT"},
  	{"-", "INT"},
  	{"/", "INT"},
  	{"*", "INT"}
  };

  dimThree intDouble = {
  	{"+", "FLOAT"},
  	{"-", "FLOAT"},
  	{"/", "FLOAT"},
  	{"*", "FLOAT"}
  };

  dimThree intBool = {
  	{"+", "error"},
  	{"-", "error"},
  	{"/", "error"},
  	{"*", "error"}	
  };

  dimThree intString = {
  	{"+", "STRING"},
  	{"-", "STRING"},
  	{"/", "STRING"},
  	{"*", "STRING"}
  };

  //double

  dimThree doubleInt = {
  	{"+", "FLOAT"},
  	{"-", "FLOAT"},
  	{"/", "FLOAT"},
  	{"*", "FLOAT"}
  };

  dimThree doubleDouble = {
  	{"+", "FLOAT"},
  	{"-", "FLOAT"},
  	{"/", "FLOAT"},
  	{"*", "FLOAT"}
  };

  dimThree doubleBool = {
  	{"+", "error"},
  	{"-", "error"},
  	{"/", "error"},
  	{"*", "error"}	
  };

  dimThree doubleString = {
  	{"+", "STRING"},
  	{"-", "STRING"},
  	{"/", "STRING"},
  	{"*", "STRING"}
  };

  //string
  dimThree stringInt = {
  	{"+", "STRING"},
  	{"-", "STRING"},
  	{"/", "STRING"},
  	{"*", "STRING"}
  };

  dimThree stringDouble = {
  	{"+", "STRING"},
  	{"-", "STRING"},
  	{"/", "STRING"},
  	{"*", "STRING"}
  };

  dimThree stringBool = {
  	{"+", "error"},
  	{"-", "error"},
  	{"/", "error"},
  	{"*", "error"}	
  };

  dimThree stringString = {
  	{"+", "STRING"},
  	{"-", "STRING"},
  	{"/", "STRING"},
  	{"*", "STRING"}
  };

  //bool

  dimThree boolInt = {
  	{"+", "error"},
  	{"-", "error"},
  	{"/", "error"},
  	{"*", "error"}
  };

  dimThree boolDouble = {
  	{"+", "error"},
  	{"-", "error"},
  	{"/", "error"},
  	{"*", "error"}
  };

  dimThree boolBool = {
  	{"+", "BOOL"},
  	{"-", "BOOL"},
  	{"/", "BOOL"},
  	{"*", "BOOL"}	
  };

  dimThree boolString = {
  	{"+", "error"},
  	{"-", "error"},
  	{"/", "error"},
  	{"*", "error"}
  };



  dimTwo intDim = {
  	{"INT", intInt},
  	{"FLOAT", intDouble},
  	{"BOOL", intBool},
  	{"STRING", intString}
  };

  dimTwo doubleDim = {
  	{"INT", doubleInt},
  	{"FLOAT", doubleDouble},
  	{"BOOL", doubleBool},
  	{"STRING", doubleString}
  };

  dimTwo boolDim = {
  	{"INT", boolInt},
  	{"FLOAT", boolDouble},
  	{"BOOL", boolBool},
  	{"STRING", boolString}
  };

  dimTwo stringDim = {
  	{"INT", stringInt},
  	{"FLOAT", stringDouble},
  	{"BOOL", stringBool},
  	{"STRING", stringString}
  };


   dimOne matrix = {
  	{"INT", intDim},
  	{"FLOAT", doubleDim},
  	{"BOOL", boolDim},
  	{"STRING", stringDim}
  };
};
#endif