#ifndef TREE_H
#define TREE_H

#include 	"types.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>

#define BUFFSIZE 10

using namespace std;

template <typename T>
class Tree
{
	public:
		//empty constructor
		explicit Tree(){ nodes_counter = 0 }

		//Constructors
		//There are two possible constructors that you can use to create the tree structure. Each one has a differenct constructor method.

		//(Much more complex) Constructor for tree as a Linked List
		explicit Tree();

		//1-d array with pointers to TreeNode<T> structures. The index of the array corresponds to the index of the vertice, the edges are in
		//the edges_array.
		explicit Tree();


	 	//  Destructors
		//	~Tree();

		void initialize_edges_array(string filename);

		//void breath_first_search();
		//void depth_first_search();
		void print_edges();

		//virtual bool insert_node(TreeNode<T> *) = 0;
		//virtual bool find_node(T *) = 0;

	protected:
		int nodes_counter;

		vector< vector<int>* >* edges_array;

};



/*This function parses a file that contains the edges of the tree and stores them in the edges_array member. We assume that the file contains
	edges that don't violate the rules of the specific tree.
 @Params:
 		filename : the name of the file to parse for edges.
 @Brief:
 		Each line contains two numbers seperated by whitespace, each number is a vertice index. The line depicts an edge between two vertices
 @return:
 		void
*/
Tree<T>::initialize_edges_array(string filename){

	int vertice;
	char temp_char;
	bool to_many_flag = false;

	//buff to store numerical characters before converting
	char buff[BUFFSIZE];
	string number;
	size_t size ;
	int buffer_index = 0;

	vector<int>* edge = NULL;

  //INITIALIZE
	edges_array = new vector< vector<int> *>();

	cout << "filename = " << filename << "\n";

	ifstream ist(filename.c_str() );
	if ( !ist ) {
		cout << "error in ist \n" ;
		return;
	}

	while ( 1 ){
		cout << "loop->" ;
		temp_char = ist.get();

		//reach end of file
		if ( ist.eof() )
			break;

		//newlines and whitespaces check
		if ( temp_char == '\n' || temp_char == ' '){
			cout << "in char newline whitespace case\n";
			if ( buffer_index == 0){
				cout << "buffer_index == 0 when reading newline or newspace treat this as error \n";
				return;
			}

			//update buffer with end of string char,convert to string, convert to integer
			buff[buffer_index] = '\0';
			number = buff;
			vertice = stoi ( number );	//

			cout << "integer = " << vertice << "\n";

			//store to vectors
			if ( edge == NULL){
				edge = new vector<int>();
				edge->push_back(vertice);
			}else{
				edge->push_back(vertice);
				edges_array->push_back(edge);
				edge = NULL;
			}

			//empty the buffer by reinitializing buffer_index to zero
			buffer_index = 0;

		}else{
			cout << "in char number case,char = ";

			buff[buffer_index] = temp_char;
			buffer_index++;
			cout << temp_char << "\n";
		}
//		to_many_flag = false;

	}
}

template <typename T>
void Tree<T>::print_edges(){
	int i;
	int j;

	cout << "number of edges in the tree = " << edges_array->size() << endl;

	for ( i = 0 ; i < edges_array->size() ; i++){
		cout << "sizeof of the " << i << " vector table = " << edges_array->at(i)->size() << endl;
		for( j = 0 ; j < edges_array->at(i)->size() ; j++){
			cout << edges_array->at(i)->at(j) << (j ? "" : "->") ;
		}
		cout << "\n" ;
	}

}

/*
template <typename T>
Tree<T>::~Tree(){
  delete[] head;
}*/



#endif //TREE_H
