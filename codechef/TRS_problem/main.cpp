#include <iostream>
#include "tree/simple_tree.h"

using namespace std;

int main( int argc , char*argv[] ){

	string file_name;

	cout << "Please enter input file name\n";

	cin >> file_name;
	cout << "name = " << file_name << "\n";

	SimpleTree<int> s(file_name);

	s.print_edges();

	//ifstream ist(file_name.c_str);
	//while

	/*
	TreeNode<int> node;

	node.value = 5;
	node.next = NULL;

	std::cout << "node value = " << node.value << std::endl;

	SimpleTree<int> tree;

	SimpleTree<char> notSpecializedTree;

	tree.add_node(NULL);
	notSpecializedTree.add_node(NULL);
	*/
	return 1;
}
