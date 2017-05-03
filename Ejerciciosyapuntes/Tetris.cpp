#include <queue>
#include <stack>
#include <iostream>
#include <math.h>

enum Piezas 
{
	AzulC, AzulF, Naranja, Amarillo, Verde, Lila, Rojo, Exit
};

void main()
{
	int TAM_MAX = 6;
	Piezas p;
	std::queue<Piezas>cola;
	bool juego = true;

	while (juego = true)
	{
		p = static_cast<Piezas>(rand() % static_cast<int>(Exit));

		if (cola.size() == TAM_MAX)
		{
			cola.pop();
			cola.push(p);
			while (!cola.empty())
			{
				std::cout << cola.front() << " ";
				cola.pop();
			}
			system("pause");
		}
		else
		{
			cola.push(p);
		}
	}
}