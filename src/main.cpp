#include <iostream>
#include "pattern.h"
using namespace std;

int main(int argc, char **argv)
{
  Pattern pat;
  pat.readfile( argv[1] );
  pat.nodeInitailize();
  pat.edgeInitailize();

  return 0;
}
