//This problem solves a codechef medium difficulty challenge
//http://www.cplusplus.com/articles/DEN36Up4/

#include <iostream>
#include "graph.h"

int main(int argc, char *argv[]){

	//read input
	//bipartite graph (U,V,E)
	// U,V two bipartitions of the graph with |U| = |V| = N , E the edge set
	//first line. |U|, |E| , K
	//next line the edges
	std::cout << "hello graph" << std::endl;

	int test_params = atoi(argv[3]);

	Graph g = Graph( 2*atoi(argv[1]) , atoi(argv[2]) , test_params );

	int more = 1;
	int vertice1,vertice2;

	printf("before scanf\n");
	while ( more == 1 ){
		scanf("%d %d",&vertice1,&vertice2);
		if ( vertice1 == -1 || vertice2 == -1){
			more = 0;
			continue;
		}

		g.add_edge( vertice1, vertice2);

	}
	g.print_graph();


	int pm = g.problem_solving();
	if ( pm > test_params)
		printf("yes\n");
	else
		printf("no\n");

	printf("pm = %d ",pm);

	return 1;
}
