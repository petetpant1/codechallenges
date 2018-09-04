#include <iostream>
#include <cstdint>

using namespace std;

class Structure{

public:
  Structure();

  int getNodesCounter();

private:
  uint64_t nodes_counter;
  static const int vertical_tag = 0;
  static const int horizontal_tag = 0;

};
