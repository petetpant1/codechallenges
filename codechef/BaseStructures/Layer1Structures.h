#include <iostream>
#include "Structure.h"

using namespace std;

/////ComplexStructure
template<class T>
class ComplexStructure: public Structure {

public:
  ComplexStructure();
  //~ComplexStructure();

  //virtual bool insert_vertice(int vertice1, int vertice2, T* object) = 0;

  int getTag();

private:
  static const int vertical_tag = 1;
  static const int horizontal_tag = 1;

  //This pointer always points to the vertice with index 1
  T* head;

};

template<class T>
ComplexStructure<T>::ComplexStructure(): Structure(){
  head = NULL;
  cout << "inside the ComplexStructure constructor \n";
}

template<class T>
int ComplexStructure<T>::getTag(){
  return vertical_tag;
}



/////SimpleStrucutre
template<class T>
class SimpleStructure: public Structure{


public:
  SimpleStructure();
  //~SimpleStructure();

  //virtual bool insert_vertice(int vertice1, int vertice2, T* object) = 0;

  int getTag();

private:
  static const int vertical_tag = 1;
  static const int horizontal_tag = 0;

  //This pointer always points to the vertice with index 1
  T* head;

};

template<class T>
SimpleStructure<T>::SimpleStructure() : Structure() {
  head = NULL;
  cout << "inside SimpleStructure constructor\n";
}

template<class T>
int SimpleStructure<T>::getTag(){
  return vertical_tag;
}
