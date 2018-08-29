//This tree is a tree without any property, the nodes are added to this tree given the associated edge
#ifndef SIMPLE_TREE_H
#define SIMPLE_TREE_H

#include "tree.h"
#include <iostream>

template <typename T>
class SimpleTree: public Tree<T>{
public:
  SimpleTree();

  bool add_node(TreeNode<T>* node);
  //bool find_node(T* node);

private:
  int k;

};

template <typename T>
SimpleTree<T>::SimpleTree() {
}

template <typename T>
bool SimpleTree<T>::add_node(TreeNode<T>* node){

  std::cout << "inside add node simple Tree" << std::endl;

  return true;
}

template <>
bool SimpleTree<int>::add_node(TreeNode<int>* node){

  std::cout << "inside add node simple Tree specialized func" << std::endl;
  return true;

}


#endif //SIMPLE_TREE_H
