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

  void add_node( node ){
    tree.add_node( node )
    if ( !check_tree_consistency() )
      tree.remove_node( node )

  }

  bool check_tree_consistency(){
    somehow check if the tree rules are violated, using the T tree and its methods.
    temp = tree.root()
    temp = tree.next()
    if ( temp.depth >= root.depth )
      error 
  }
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
