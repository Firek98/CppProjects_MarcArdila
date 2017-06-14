#include <iostream>
#include <string>
#include <ctime>

enum class EnemyType 
{
	ZOMBIE,VAMPIRE,GHOST,WITCH,MAX
};

struct Enemy
{
	EnemyType type;
	std::string name;
	int health;
};

bool operador(Enemy a, Enemy b) 
{
	return (a.type == b.type && a.name == b.name);
}

Enemy CreateRandomEnemy() 
{
	Enemy enemigo;
	enemigo.type = static_cast<EnemyType>(rand() % static_cast<int>(EnemyType::MAX));
	int name = rand() % 5;
	switch (name)
	{
	case 0: enemigo.name = "Paco";
		break;
	case 1: enemigo.name = "Luis";
		break;
	case 2:	enemigo.name = "Pepe";
		break;
	case 3: enemigo.name = "XX";
		break;
	case 4: enemigo.name = "Tona";
		break;
	default:
		break;
	}
	enemigo.health = rand() % 101;

	return enemigo;
}
std::string GetEnemyTypeString(EnemyType a)
{
	switch (a)
	{
	case EnemyType::ZOMBIE:
		return "Zombie";
		break;
	case EnemyType::VAMPIRE:
		return "Vampire";
		break;
	case EnemyType::GHOST:
		return "Ghost";
		break;
	case EnemyType::WITCH:
		return "Witch";
		break;
	default:
		break;
	}
}

void main() 
{
	const int MAX_ENEMIES = 5;
	static Enemy enemigos[MAX_ENEMIES];

	for (int i = 0; i < MAX_ENEMIES; i++)
	{
		enemigos[i] = CreateRandomEnemy();

		for (int j = 0; j < i; j++)
		{
			if (operador(enemigos[i], enemigos[j]) == true)
			{
				i--;
			}
		}
	}

	for (int z = 0; z < MAX_ENEMIES; z++)
	{
		std::string tipo = GetEnemyTypeString(enemigos[z].type);
		std::cout << enemigos[z].name << tipo << enemigos[z].health;
	}
}