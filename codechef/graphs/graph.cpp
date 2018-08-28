#include "graph.h"
#include <stdio.h>
#include <iostream>

Graph::Graph(int vertices_counter, int edges_counter) : next_addition_pos(0) {

	int i;

	vertices = new int[vertices_counter];
	vertices_count = vertices_counter;

	for ( i = 0; i < vertices_count; i++)
		vertices[i] = i+1;


	edges_count = edges_counter;

	edges = new int*[edges_count];


	for ( i = 0; i < edges_count; i++)
		edges[i] = new int[2];

	return;

}


bool Graph::add_edge(int vertice1, int vertice2){

	edges[next_addition_pos][0] = vertice1;
	edges[next_addition_pos][1] = vertice2;

	next_addition_pos++;
	return true;
}

void Graph::print_graph(){

	std::cout<< "number of vertices " << vertices_count << std::endl; 

	std::cout << "edges table" << std::endl;
	for ( int i = 0; i < edges_count; i++){
		printf("%d -> %d\n", edges[i][0],edges[i][1] );
	}

}

