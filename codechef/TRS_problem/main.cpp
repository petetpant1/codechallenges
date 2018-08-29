#include<iostream>
#include "tree/simple_tree.h"

int main( int argc , char*argv[] ){

	std::cout << "an output" << std::endl;

	TreeNode<int> node;

	node.value = 5;
	node.next = NULL;

	std::cout << "node value = " << node.value << std::endl;

	SimpleTree<int> tree;

	SimpleTree<char> notSpecializedTree;

	tree.add_node(NULL);
	notSpecializedTree.add_node(NULL);

	return 1;
}
