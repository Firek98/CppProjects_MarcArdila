// PracticasRamon.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <ctime>

enum class Weapon { FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX };

class Zombie;

class Player {

public:

	Player();
	Weapon weapon;
	float precision;
	int life;

	void attack(Zombie &);
	bool IsAlive() {

		return life > 0;
	};
};

Player::Player() {

	int aux = rand() % 6;

	weapon = (static_cast <Weapon>(rand() % static_cast<int>(Weapon::MAX)));
	precision = (rand() % 10) / 10.0f;
	life = rand() % 101;

};


class Zombie {

public:

	Zombie();
	int distanceToPlayer;
	float speed;
	float damage;
	int life;

	void attack(Player &);
	bool IsAlive() {

		return life > 0;
	};

};

Zombie::Zombie() {

	distanceToPlayer = rand() % (180) + 20;
	speed = (rand() % 200) / 10.0f;
	damage = (rand() % 200) / 10.0f;
	life = rand() % 101;
}

void Player::attack(Zombie & Z) {

	int daño;

	daño = (static_cast <int>(weapon));

	Z.life = Z.life - daño*precision;
};

void Zombie::attack(Player & PJ) {

	if (distanceToPlayer <= 0) {

		PJ.life = PJ.life - damage;
	}
	else distanceToPlayer = distanceToPlayer - 1;

}

int main()
{
	const int MAXZOMBIES = 10;
	srand(time(nullptr));
	Player player;
	Zombie zombies[MAXZOMBIES];

	bool zombiesAreAlive = true;

	do
	{
		std::cout << "La vida del jugador es " << player.life << " " << "La precision es de " << player.precision << std::endl;
		zombiesAreAlive = false;

		for (int i = 0; i < MAXZOMBIES; i++)
		{
			if (zombies[i].life > 0) {
				zombies[i].attack(player);
				player.attack(zombies[i]);

				std::cout << "La distancia del zombie es de " << zombies[i].distanceToPlayer << zombies[i].speed << zombies[i].damage << zombies[i].life << std::endl;;
				zombiesAreAlive = true;
			}
		}
	} while (player.IsAlive() && zombiesAreAlive);

	return 0;
}