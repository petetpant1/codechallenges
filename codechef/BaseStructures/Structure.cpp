#include <iostream>
#include <cstdint>
#include "Structure.h"

using namespace std;

Structure::Structure(){
  nodes_counter = 0;
  cout << "inside base class Strucure constructor /";
}

int Structure::getNodesCounter(){

  return nodes_counter;

}
