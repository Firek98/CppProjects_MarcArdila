#include <vector>

// 1 - Declarar e inicializar los siguientes conjuntos de elementos haciendo uso del conteneder vector de la librer�a STL.

// v1: vector de 5 elementos.

std::vector<int>v1;

// v2: Vector de 10 elementos inicializados en 0.

std::vector<int>v2(10);

// v3: {10,9,8,7,6,5,4,3,2,1}

std::vector<int>v3({ 10,9,8,7,6,5,4,3,2,1 });

// v4: {"Gertrudiz", "Pancracia", "Anacleto", "Hipolito", "Eustaquio", "Fulgencia"};

std::vector<std::string>v4({ "Gertrudiz", "Pancracia", "Anacleto", "Hipolito", "Eustaquio", "Fulgencia" });

// v5: Vector que contiene la misma informaci�n que v3.

std::vector<int>v5(v3); // std::vector<int>v5(v3.begin(), v3.begin());

// V6: Vector que contiene la informaci�n de personas. Para cada persona se tiene el nombre, la fecha de nacimiento