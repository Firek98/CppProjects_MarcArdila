#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void Exercici1()
{
	//Escribe un programa que imprima las letras minúsculas en posiciones impares.

	for (char letra = 'a'; letra <= 'z'; letra++)
	{
		if (letra % 2 != 0)
		{
			std::cout << letra << ' ';
		}
	}
	std::cout << std::endl;
}

void Exercici2(int valor, int pos)
{
	//Escribe un programa que muestre en tres columnas, el número, el cuadrado y el cubo de los 5 primeros números enteros a partir
	//del número contenido en num incluido. (si num es 5 que muestre lo pedido del 5 6 7 8 9)
	//(utilizar for)
	
	int num = valor;
	int movs = pos;
	int cuad;
	int cub;

	for (int i = 0; i < pos; i++)
	{
		cuad = num*num;
		cub = num*cuad;

		std::cout << num << "   " << cuad << "   " << cub << "   " << std::endl;
		num++;
	}
}

void Exercici3()
{
	/*Escribe un programa que pida un carácter al usuario, si es una letra o cifra debe imprimirlo y pedir otro, en caso de que introduzca
	el símbolo "*" debe salir y en cualquier otro caso debe imprimir "ERROR" y pedir otro carácter
	(utilizar do while)*/

	char caracter;
	std::cout << "Dame un caracter " << std::endl;
	std::cin >> caracter;

	do
	{
		std::cout << "Dame otro caracter " << std::endl;
		std::cin >> caracter;
	} while (caracter!='*' && caracter > 'a' && caracter < 'z');

}

void main()
{
	Exercici1();
	Exercici2(5, 5);
}