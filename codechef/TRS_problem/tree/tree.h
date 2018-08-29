#ifndef TREE_H
#define TREE_H

#include 	"types.h"

template <typename T>
class Tree
{
	public:
		explicit Tree();
		~Tree();
		//void breath_first_search();
		//void depth_first_search();

		virtual bool add_node(TreeNode<T> *) = 0;
		//virtual bool find_node(T *) = 0;

	protected:
		TreeNode<T> *head;
		int nodes_counter;

};

template <typename T>
Tree<T>::Tree(){
  head = new TreeNode<T>;
  nodes_counter = 0;
}

template <typename T>
Tree<T>::~Tree(){
  delete[] head;
}



#endif //TREE_H
