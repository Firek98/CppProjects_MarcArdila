#include "DynArray.hh"
#include <iostream>
void main() {


	DynArray arrayDefault(5, 9);
	DynArray arrayDyn(9, 4);

	int m = arrayDefault[6];
	int n = arrayDyn[10];
	bool operador = operator==(arrayDefault, arrayDyn);

	std::cout << m << " " << n << " " << operador << std::endl;

}