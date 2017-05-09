#include <stack>
#include <iostream>
#include <queue>


void superMerge(std::stack<int>stack1, std::stack<int>stack2)
{
	std::stack<int>stackres;
	std::stack<int>pila1(stack1);
	std::stack<int>pila2(stack2);
	std::priority_queue<int>orden;
	while (!pila1.empty())
	{
		if (pila1.top() > pila2.top())
		{
			orden.push(pila1.top());
			pila1.pop();
		}
		else if (pila2.top() > pila1.top())
		{
			orden.push(pila2.top());
			pila2.pop();
		}
	}
}

void putHat(std::stack<int>stack1, std::stack<int>stack2)
{
	std::stack<int>stackres;
	std::stack<int>stacka(stack1);
	std::stack<int>stackb(stack2);

	while (!stackb.empty())
	{
		stackres.push(stackb.top());
		std::cout << stackres.top();
		stackb.pop();
	}
	while (!stacka.empty())
	{
		stackres.push(stacka.top());
		std::cout << stackres.top();
		stacka.pop();
	}
	stackres.pop();
}

std::queue<int>transformToQ(std::stack<int>stack1)
{
	std::queue<int>res;
	std::stack<int>pila(stack1);

	while (!pila.empty())
	{
		res.push(pila.top());
		pila.pop();
	}

	return res;
}

bool isHat(std::stack<int>a, std::stack<int>b)
{
	int aux = 1;
	std::stack<int>r(a);
	while (!a.empty() || !b.empty())
	{
		if (a.top() == b.top())
		{

			a.pop();
			aux++;

		}
		if (aux == r.size())
		{
			return true;
			std::cout << "true";
		}
		else return false;
	}

	std::cout << aux;
}
bool balancedP(std::queue<char>listax)
{
	int contador1 = 0;
	int contador2 = 0;

	while (!listax.empty())
	{
		if (listax.back() == '(')
		{
			contador1++;
		}
		else if (listax.back() == ')')
		{
			contador2++;
		}
		listax.pop();
	}
		if (contador1 == contador2)
		{
			return true;
			std::cout << "true";
		}
		else return false;

}

void change(std::stack<int>aux)
{
	std::stack<int>guarda(aux);

	int auxi;
	int auxi2 = guarda.top();
	std::stack<int>result;
	std::stack<int>numeros;
	while (!guarda.empty())
	{
		numeros.push(guarda.top());
		auxi = guarda.top();
		guarda.pop();
	}
	result.push(auxi);
	while(!numeros.empty()+1)
	{
		result.push(numeros.top());
		numeros.pop();
	}
	result.push(auxi2);

	while (!result.empty())
	{
		std::cout << result.top();
		result.pop();
	}
}
void main()
{
	std::stack<int>a;
	std::stack<int>b;
	std::stack<int>c;
	a.push(1);
	a.push(3);
	a.push(5);
	b.push(6);
	b.push(8);
	b.push(9);
	c.push(6);
	c.push(8);
	c.push(9);
	//superMerge(a, b);
	std::cout << std::endl;
	putHat(a, b);
	std::cout << std::endl;
	auto ttq = transformToQ(a);
	std::cout << std::endl;
	auto ih = isHat(b, c);
	std::queue<char>d;
	d.push('(');
	d.push('(');
	d.push(')');
	d.push('(');
	d.push(')');
	d.push(')');

	balancedP(d);
	std::stack<int>e;
	e.push(1);
	e.push(2);
	e.push(3);
	e.push(4);
	change(e);
}