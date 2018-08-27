#include "graph.h"
#include <iostream>

Graph::Graph(int vertices_counter, int edges_counter,int testing_sum){


	std::cout << "constructor graph" << std::endl;

	vertices = new int[vertices_counter];
	testing_vertices = new int[vertices_counter];

	vertices_count = vertices_counter;
	int i;
	for (i = 0; i < vertices_counter; i++){
		vertices[i] = i+1;
		testing_vertices[i] = i+1;
	}


	edges_count = edges_counter;
	current_counter = 0;

	edges = new int*[edges_count];


	for ( i = 0; i < edges_count; i++)
		edges[i] = new int[2];

	test_params = testing_sum;

	return;

}


bool Graph::add_edge(int vertice1, int vertice2){

	edges[current_counter][0] = vertice1;
	edges[current_counter][1] = vertice2;

	current_counter++;
	return true;
}

void Graph::print_graph(){

	std::cout<< "number of vertices " << vertices_count << std::endl; 

	std::cout << "edges table" << std::endl;
	for ( int i = 0; i < edges_count; i++){
		printf("%d -> %d\n", edges[i][0],edges[i][1] );

	}

}

//this function must be abstract
// for now its okay but for other graph problems this needs to be implemented
bool Graph::problem_solving(int i){

	int vertice1 = edges[i][0];
	int vertice2 = edges[i][1];

	int sum = 0;

	int index = i;
	int argument_i = i;

	//find the index of the next differenct number
	//O(n) n is the edges number
	for ( i = i+1 ; i < edges_count; i++){
		if ( edges[i][0] == vertice1 )
			index++;
		else{
			++index;
			printf("case for vertice %d, the index of the edge with the difference starting vertice is %d\n", vertice1, index);
			break;
		//	return problem_solving(index);
		}
	}
	if ( i == edges_count )
	{
		index = index + 1;
	}


	while ( index - argument_i > 0){

		vertice1 = edges[argument_i][0];
		vertice2 = edges[argument_i][1];
		printf("vertice1 = %d , vertice2 = %d\n", vertice1, vertice2);

		//case of a valid edge
		if ( testing_vertices[vertice1] != 0 && testing_vertices[vertice2] != 0){
			//update testing_vertices and testing_counter
			testing_vertices[vertice1] = 0;
			testing_vertices[vertice2] = 0;

			testing_counter = testing_counter + 2;
			if ( testing_counter == vertices_count )
			{
				testing_vertices[vertice1] = vertice1;
                        	testing_vertices[vertice2] = vertice2;
                        	testing_counter = testing_counter - 2;
				printf("RETUIRNING 1\n");
				return 1;
			}
			else{
				sum = sum + problem_solving(index);
				printf("AFTER SUM = %d",sum);
			}

                	testing_vertices[vertice1] = vertice1;
        	        testing_vertices[vertice2] = vertice2;
	                testing_counter = testing_counter - 2;
		}

		argument_i = argument_i + 1;

	}
	printf("JUST BEFORE RETURNING SUM = %d\n", sum);
	return sum;

	//return sum + ;
}


Graph::~Graph(){

//	delete[] vertices;

}
