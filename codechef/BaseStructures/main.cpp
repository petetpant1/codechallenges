#include<iostream>
#include "Layer1Structures.h"
#include "tree/tree.h"

using namespace std;

int main( int argc , char* argv[]){

	cout<< "into main\n";

	SimpleStructure<int> s;

	ComplexStructure<int> c;

	Tree< ComplexStructure<int> > t;

	cout << t.getTag() << "\n";

	return 1;

}
