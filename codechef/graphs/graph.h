#ifndef GRAPH_H
#define GRAPH_H

class Graph{
public:
	explicit Graph( int vertices, int edges_count);

	bool add_edge(int vertice1, int vertice2);
	void print_graph();

	//virtual function to be implemented on the graph
	virtual int problem_solving(int i) = 0;

protected:
	int *vertices; //1-d array for holding the # of the vertice
	int **edges;	//2-d array vertice# -> vertice#
	int edges_count;
	int vertices_count;
	int next_addition_pos;

};

#endif //GRAPH_H
