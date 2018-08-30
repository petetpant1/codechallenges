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
		explicit Tree();
		explicit Tree(string filename);
//		~Tree();


		//void breath_first_search();
		//void depth_first_search();
		void print_edges();

		virtual bool add_node(TreeNode<T> *) = 0;
		//virtual bool find_node(T *) = 0;

	protected:
		TreeNode<T> *head;
		int nodes_counter;
		vector< vector<int>* >* edges_array;

};

template <typename T>
Tree<T>::Tree(){
  head = new TreeNode<T>;
  nodes_counter = 0;
}

template <typename T>
Tree<T>::Tree(string filename){
	//int vertice1,vertice2;
	int vertice,temp_vertice;
	char temp_char;
	bool to_many_flag = false;

	//buff to store numerical characters before converting
	char buff[BUFFSIZE];
	string number;
	size_t size ;
	int buffer_index = 0;

	vector<int> *edge = NULL;

  //INITIALIZE
	edges_array = new vector< vector<int>* >();
	//

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
			vertice = stoi ( number );
			cout << "integer = " << vertice << "\n";

			//store to vectors
			if ( edge == NULL){
				edge = new vector<int>(2);
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

	for ( i = 0 ; i < edges_array->size() ; i++){
		cout << edges_array->at(i)->at(0) << "->";
		cout << edges_array->at(i)->at(1) << "\n";
	}

}

/*
template <typename T>
Tree<T>::~Tree(){
  delete[] head;
}*/



#endif //TREE_H
