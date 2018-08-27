#ifndef GRAPH_H
#define GRAPH_H

class Graph{

	public:
		explicit Graph(int , int , int);
		~Graph();

		bool add_edge(int , int );
		void print_graph();

		//this functions needs to be abstract
		bool problem_solving(int i = 0);

	private:
		int **edges;

		int edges_count;
		int current_counter;
		int *vertices;
		int vertices_count;

		//this variable is very specific
		int test_params;
		//
		int *testing_vertices;
		int perfect_matches = 0;
		int testing_counter = 0;
};

#endif //GRAPH_H
