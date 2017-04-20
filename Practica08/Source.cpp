#include <fstream>
#include <iostream>
#include <map>
#include <unordered_map>
#include <string>



void main() {
	std::ifstream fentrada("elements.dat");
	std::unordered_map<std::string, std::string, std::string> mymap;
	std::string line, result, elem1, elem2;

	while (getline(fentrada, line)) {
		std::cout << line << std::endl;
		result = line.substr(0, '=');
		elem1 = line.substr('=', '+');
		elem2 = line.substr('+', '\n');
		//usar find para encontrar posicion y luego usarla
	};
}
