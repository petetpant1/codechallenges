#ifndef GRAPH_KPERFMAT_H
#define GRAPH_KPERFMAT_H

#include "graph.h"

class Graph_KPERFMAT: public Graph{

public:
	//Subclass constructor
	Graph_KPERFMAT(int vertices_counter, int edges_counter, int test_params) ;

	//functionality inheritance from base class Graph
	int problem_solving( int i =0  );

private:
	int current_counter;
	int test_params;

	int tested_counter;

};

#endif //GRAPH_KPERFMAT_H
