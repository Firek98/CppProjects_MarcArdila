#include <stack>
#include <iostream>
#include <string>


//EJERCICIO 1 - Programa que lee números indicados por el usuario y los almacena en una pila. Si dice z, se elimina la última acción realizada y si pulsa salir, sale del programa.


void Ejercicio1() {

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

//Ejercicio 2 - Con una pila {4,51,6,7,39}
void Ejercicio2() 
{
	// 1) Imprimirla
	std::stack<int> pila;

	pila.push(39);
	pila.push(7);
	pila.push(6);
	pila.push(51);
	pila.push(4);

	std::stack<int>pila2(pila);
	while (!pila2.empty())
	{
		std::cout << pila2.top() << " ";
		pila2.pop();
	}
	std::cout << std::endl;

	// 2) Función que introduciendo una posición y un valor se cambie el número en esa posición por el valor que se le da

	std::stack<int>pila3(pila);
	int x;
	int valor;
	std::cout << "Escribe la posicion a modificar " << std::endl;
	std::cin >> x;
	std::cout << "Escribe el valor a añadir " << std::endl;
	std::cin >> valor;

	std::stack<int>guardanum;

	while (pila3.size() >= x)
	{
		guardanum.push(pila3.top());
		pila3.pop();
	}

	pila3.push(valor);
	guardanum.pop();
	while (!guardanum.empty())
	{
		pila3.push(guardanum.top());
		guardanum.pop();
	}

	std::stack<int>pila4(pila3);
	while (!pila4.empty())
	{
		std::cout << pila4.top() << " ";
		pila4.pop();
	}



}

void main() 
{
	Ejercicio2();
}