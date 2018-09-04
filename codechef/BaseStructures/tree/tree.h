#include <iostream>

using namespace std;

template<class T>
class Tree{

public:
  Tree() {}

  int getTag();

  /*possible member functions for all trees
  initialize T tree in a well defined way(meaning that we trust the input for the tree),maybe a file with the number of vertices,the edges
  both the ComplexStructure and the SimlpeStructure should implement this method
  void initialize_tree( input ){
    tree.initialize(input)
  }
  */

private:
  T tree;

};

template <class T>
Tree<T>::Tree(): {

}

template <class T>
int Tree<T>::getTag(){
  return tree.getTag();
}
