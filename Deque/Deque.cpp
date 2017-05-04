#include<deque>
#include <iostream>
#include <vector>
int main() {

	float result;
	float imprim2;
	//deque de float de 10 elementos inicializados a 10.50
	std::deque<float> prices(10, 10.50);
	//borrar último elemento para volverlo otro (32.43)
	prices.pop_back();
	prices.push_back(32.43);
	//borrar primer elemento
	prices.pop_front();
	//asignar la deque a otra
	std::deque<float> prices2(prices);

	//añadir dos valores al inicio de la nueva deque
	prices2.push_front(20.31);
	prices2.push_front(5.64);
	//insertar un elemento en la posición indicado
	prices2.insert(prices2.begin() + 1, 10);

	//imprimir la primera usando un backward iterator
	
	for (std::deque<float>::reverse_iterator rit = prices.rbegin(); rit != prices.rend(); ++rit) {

		std::cout << *rit << " ";
	};
	std::cout << std::endl;
	
/*	while (!prices.empty()) {

		result = prices.back();
		std::cout << result << " ";
		prices.pop_back();
	}
	std::cout << std::endl;
	
	while(prices2.front() != prices2.back()) {

		imprim2 = prices2.front();
		std::cout << imprim2 << " ";
		prices2.pop_front();
	}*/
	std::deque<float>::size_type sz = prices2.size();
	for (int i = 0; i < sz; i++) {

		imprim2 = prices2[i];
		std::cout << imprim2 << " ";
	}
	std::cout << std::endl;
	//Vector
	std::vector<float> v1(10, 10.50);

	v1.pop_back();
	v1.push_back(32.43);
	v1.erase(v1.begin());
	std::vector<float> v2(v1);
	v2.insert(v2.begin(), 20.31);
	v2.insert(v2.begin(), 5.64);
	v2.insert(v2.begin() + 1, 10);

	for (std::vector<float>::reverse_iterator it = v1.rbegin(); it != v1.rend(); ++it) {

		std::cout << *it << " ";

	};
	std::cout << std::endl;
	float imprimvector;
	/*while (v2.front() != v2.back()) {

		imprimvector = v2.front();
		std::cout << imprimvector << " ";
		v2.erase(v2.begin());
	}*/

	for (int i = 0; i < v2.size(); i++) {

		imprimvector = v2[i];
		std::cout << imprimvector << " ";
	}
}