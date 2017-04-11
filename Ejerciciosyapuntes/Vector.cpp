#include <vector>

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

}

// 2 - Implementar las siguientes funciones haciendo uso de vector