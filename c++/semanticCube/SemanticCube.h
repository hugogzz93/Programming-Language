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

private:

  //int
  dimThree intInt = {
  	{"+", "int"},
  	{"-", "int"},
  	{"/", "int"},
  	{"*", "int"}
  };

  dimThree intDouble = {
  	{"+", "double"},
  	{"-", "double"},
  	{"/", "double"},
  	{"*", "double"}
  };

  dimThree intBool = {
  	{"+", "error"},
  	{"-", "error"},
  	{"/", "error"},
  	{"*", "error"}	
  };

  dimThree intString = {
  	{"+", "string"},
  	{"-", "string"},
  	{"/", "string"},
  	{"*", "string"}
  };

  //double

  dimThree doubleInt = {
  	{"+", "double"},
  	{"-", "double"},
  	{"/", "double"},
  	{"*", "double"}
  };

  dimThree doubleDouble = {
  	{"+", "double"},
  	{"-", "double"},
  	{"/", "double"},
  	{"*", "double"}
  };

  dimThree doubleBool = {
  	{"+", "error"},
  	{"-", "error"},
  	{"/", "error"},
  	{"*", "error"}	
  };

  dimThree doubleString = {
  	{"+", "string"},
  	{"-", "string"},
  	{"/", "string"},
  	{"*", "string"}
  };

  //string
  dimThree stringInt = {
  	{"+", "string"},
  	{"-", "string"},
  	{"/", "string"},
  	{"*", "string"}
  };

  dimThree stringDouble = {
  	{"+", "string"},
  	{"-", "string"},
  	{"/", "string"},
  	{"*", "string"}
  };

  dimThree stringBool = {
  	{"+", "error"},
  	{"-", "error"},
  	{"/", "error"},
  	{"*", "error"}	
  };

  dimThree stringString = {
  	{"+", "string"},
  	{"-", "string"},
  	{"/", "string"},
  	{"*", "string"}
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
  	{"+", "bool"},
  	{"-", "bool"},
  	{"/", "bool"},
  	{"*", "bool"}	
  };

  dimThree boolString = {
  	{"+", "error"},
  	{"-", "error"},
  	{"/", "error"},
  	{"*", "error"}
  };



  dimTwo intDim = {
  	{"int", intInt},
  	{"double", intDouble},
  	{"bool", intBool},
  	{"string", intString}
  };

  dimTwo doubleDim = {
  	{"int", doubleInt},
  	{"double", doubleDouble},
  	{"bool", doubleBool},
  	{"string", doubleString}
  };

  dimTwo boolDim = {
  	{"int", boolInt},
  	{"double", boolDouble},
  	{"bool", boolBool},
  	{"string", boolString}
  };

  dimTwo stringDim = {
  	{"int", stringInt},
  	{"double", stringDouble},
  	{"bool", stringBool},
  	{"string", stringString}
  };


   dimOne matrix = {
  	{"int", intDim},
  	{"double", doubleDim},
  	{"bool", boolDim},
  	{"string", stringDim}
  };
};
#endif