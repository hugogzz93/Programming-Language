#include <iostream>
#include "SemanticCube.h"
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
  SemanticCube x;
  cout << x.getMatrix()["double"]["int"]["+"] << endl;
  return 0;
}