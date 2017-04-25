#include <vector>
#include <iostream>


// 2 - Implementar las siguientes funciones haciendo uso de vector

void AddVectors(std::vector<int>v1, std::vector<int>v2) {

	if (v1.size() == v2.size())
	{
		std::vector<int>v3(v1.size());

		for (int i = 0; i < v2.size(); i++) {

			int aux = v1[i] + v2[i];

			v3[i] = aux;
			std::cout << v3[i] << std::endl;
		}
	}
}

void ConcatVectors(std::vector<int>v1, std::vector<int>v2) {




}

void ShiftRight(std::vector<int>v1) {

	v1.pop_back();
	v1.insert(v1.begin(), rand() % 100);

	for (int j = 0; j < v1.size(); j++) {

		std::cout << v1[j] << ' ';

	}
}

void RotateLeft(std::vector<int>v1) {

	v1.push_back(v1[0]);
	v1.erase(v1.begin());

	for (int i = 0; i < v1.size(); i++) {

		std::cout << v1[i] << ' ';
	}
}

void SearchAdjacent(std::vector<int>v1) {

	int counter = 0;
	for (int i = 0; i < v1.size() - 1; i++) {

		if (v1[i] == v1[i + 1]) {

			counter++;
		}

		if (counter == 3) {

			v1.erase[i];
			v1.erase[i - 1];
			v1.erase[i - 2];

			v1.insert(v1.begin(), rand() % 100);
			v1.insert(v1.begin(), rand() % 100);
			v1.insert(v1.begin(), rand() % 100);

			counter = 0;
		}
	}

	

}
void main() {

	// 1 - Declarar e inicializar los siguientes conjuntos de elementos haciendo uso del contenedor vector de la librería STL.

	//	v1: vector de 5 elementos de tipo de entero sin inicializar.

	std::vector<int>v1(5);

	//  v2: vector de 10 elementos de tipo entero inicializados en 0.

	std::vector<int>v2(10);

	//  v3: {10,9,8,7,6,5,4,3,2,1}

	std::vector<int>v3({ 10,9,8,7,6,5,4,3,2,1 });

	//  v4: {"Gertrudiz", "Pancracia", "Anacleto", "Hipolito", "Eustaquio", "Fulgencia"};

	std::vector<std::string>v4({ "Gertrudiz", "Pancracia", "Anacleto", "Hipolito", "Eustaquio", "Fulgencia" });

	//  v5: Vector que contiene la misma información que v3.

	std::vector<int>v5(v3);

	//  v6: vector que contiene la información de personas. Para cada persona se tiene el nombre, la fecha de nacimiento 
	//		y su dni. Inicializarlo en el momento de la declaración con 3 personas con datos inventados.

	struct Persona
	{
		std::string name;
		int fecha;
		int DNI;
	};

	std::vector<Persona>v6(3);

	v6[0].name = "Gertrudiz";
	v6[0].fecha = 23;
	v6[0].DNI = 349458;
	
	
	std::vector<int>v10({ 1, 2, 4, 6 , 3 });
	ShiftRight(v10);
	RotateLeft(v10);
}