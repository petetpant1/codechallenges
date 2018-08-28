#include"graph_KPERFMAT.h"

Graph_KPERFMAT::Graph_KPERFMAT(int vertices_counter,int edges_counter,int test_params) : Graph(vertices_counter,edges_counter),test_params(test_params) {}

int Graph_KPERFMAT::problem_solving(int i){
	int vertice1 = edges[i][0];
	int vertice2 = edges[i][1];
	int horizontal_layer = i;

	int sum = 0;
	int index = i;

	//find the index of the next different number
	for ( i = i+1 ; i < edges_count; i++){
		if ( edges[i][0] == vertice1 )
			index++;
		else{
			++index;
			break;
		}
	}

	//condition in edge case
	if ( i == edges_count )
		index = index + 1;

	while ( index - horizontal_layer > 0 ){

		vertice1 = edges[horizontal_layer][0];
		vertice2 = edges[horizontal_layer][1];

		//case of an edge that connects vertices not found yet
		if ( vertices[vertice1] != 0 && vertices[vertice2] != 0){

			tested_counter = tested_counter + 2;

			if ( tested_counter == vertices_count ){
				tested_counter = tested_counter - 2;
				return 1;
			}
			else{
				vertices[vertice1] = 0;
				vertices[vertice2] = 0;
				sum = sum + problem_solving(index);
			}
	            	vertices[vertice1] = vertice1;
        	        vertices[vertice2] = vertice2;
	                tested_counter = tested_counter - 2;
		}

		horizontal_layer = horizontal_layer + 1;

	}
	return sum;

}
