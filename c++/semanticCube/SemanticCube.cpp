#include <iostream>
#include <unordered_map>
#include "SemanticCube.h"

  typedef std::unordered_map<std::string,std::string> dimThree;
  typedef std::unordered_map<std::string, dimThree> dimTwo;
  typedef std::unordered_map<std::string, dimTwo> dimOne;

dimOne SemanticCube::getMatrix() {
	return matrix;
}