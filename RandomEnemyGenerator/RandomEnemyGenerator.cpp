// CppProjects_MarcArdila.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <ctime>

enum class EnemyType { zombie, vampire, ghost, witch, MAX };

struct Enemy
{
	EnemyType type;
	std::string name;
	int health;
};

bool operator== (Enemy a, Enemy b) {

	return (a.name == b.name && a.type == b.type);
}

Enemy CreateRandomEnemy() {

	Enemy enemigo;

	enemigo.type = (static_cast<EnemyType>(rand() % static_cast<int>(EnemyType::MAX)));

	int nombre = rand() % 5;
	switch (nombre)
	{
	case 0: enemigo.name = "Paco";
		break;
	case 1: enemigo.name = "Eustaquio";
		break;
	case 2: enemigo.name = "Margaret";
		break;
	case 3: enemigo.name = "Pepe";
		break;
	case 4: enemigo.name = "Louise";
		break;
	default:
		break;
	}

	enemigo.health = rand() % 101;
	return enemigo;
}

std::string GetEnemyTypeString(EnemyType tipo) {

	switch (tipo)
	{
	case EnemyType::zombie:
		return"Zombie";
	case EnemyType::vampire:
		return"Vampire";
	case EnemyType::ghost:
		return"Ghost";
	case EnemyType::witch:
		return"Witch";
	default:
		break;
	}
}
void main()
{
	srand(time(nullptr));
	const int enemynumber = 5;

	static Enemy arr[enemynumber];

	for (int i = 0; i <= enemynumber; i++) {

		arr[i] = CreateRandomEnemy();

		for (int j = 0; j <= enemynumber; j++) {

			operator==(arr[i], arr[j]);

			if (operator== (arr[i], arr[j]) == true) {
				i--;
			}
		}
	}

	for (int contador = 0; contador <= enemynumber; contador++) {

		std::string tipo = GetEnemyTypeString(arr[contador].type);
		std::cout << tipo << " " << arr[contador].name << " " << arr[contador].health;
	}
}