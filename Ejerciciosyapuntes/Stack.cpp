#include <stack>
#include <iostream>
#include <string>


//EJERCICIO 1 - Programa que lee números indicados por el usuario y los almacena en una pila. Si dice z, se elimina la última acción realizada y si pulsa salir, sale del programa.

void main() {

	std::stack<int> pila;
	std::string datos;
	bool bucle = true;
	while (bucle)
	{
		std::stack<int>pilaimprim(pila);

		while (!pilaimprim.empty())
		{
			std::cout << pilaimprim.top() << " ";
			pilaimprim.pop();
		}
			std::cin >> datos;
			system("cls");
		
		int numero = atoi(datos.c_str());
		
		if (numero != 0 || datos == "0")
		{
			pila.push(numero);
		}
	
		else if (datos == "z" && pila.size() >= 1)
		{
			pila.pop();
		}

		else if (datos == "salir")
		{
			bucle = false;
		}
	}
}