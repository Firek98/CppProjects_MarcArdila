#include <list>
#include <iostream>
#include <queue>
#include <set>

std::list<int> superMerge(std::list<int>l1, std::list<int>l2)
{
	std::list<int>savelist1(l1);
	std::list<int>savelist2(l2);

	std::priority_queue<int>orden;
	std::list<int>result;

	for (auto it = savelist1.begin(); it != savelist1.end(); ++it)
	{
		int aux = *it;
		orden.push(aux);
	}

	for (auto it = savelist2.begin(); it != savelist2.end(); ++it)
	{
		int aux = *it;
		orden.push(aux);
	}

	while (!orden.empty())
	{
		result.push_back(orden.top());
		orden.pop();
	}
	for (auto it = result.begin(); it != result.end(); ++it)
	{
		std::cout << *it << " ";
	}
	return result;
}

void change(std::list<int>&l1)
{

	int aux1 = l1.front();
	l1.pop_front();
	int aux2 = l1.back();
	l1.pop_back();

	l1.push_back(aux1);
	l1.push_front(aux2);

	for (auto it = l1.begin(); it != l1.end(); ++it)
	{
		std::cout << *it << " ";
	}
}

int getElementPos(std::list<int>&l1, int pos)
{
	std::list<int>::iterator it = l1.begin();

	std::advance(it, pos - 1);

	int aux = *it;

	std::cout << aux;
	return aux;
}

void removeDuplicates(std::list<int>&l1)
{

	for (auto it = l1.begin(); it != l1.end(); ++it)
	{
		for (auto it2 = l1.begin(); it2 != l1.end(); ++it2)
		{
			if (*it2 == *it && it2 != it)
			{
				l1.erase(it2++);
				it2--;
			}
		}
	}
	for (auto it = l1.begin(); it != l1.end(); ++it)
	{
		std::cout << *it << " ";
	}
}

void removeElement(std::list<int>&l1, int elem)
{
	for (auto it = l1.begin(); it != l1.end(); ++it)
	{
		if (*it == elem)
		{
			l1.erase(it++);
			it--;			
		}
	}
	for (auto it = l1.begin(); it != l1.end(); ++it)
	{
		std::cout << *it << " ";
	}
}
bool palindrome(std::list<int> l1)
{
	for (auto it = l1.begin(); it != l1.end(); ++it)
	{
		for (auto it2 = l1.end(); it2 != l1.begin(); --it2)
		{
			if (*it != *it2)
			{
				return false;
			}
		}
	}
	return true;
}
void main()
{
	std::list<int> lista1{ 6, 1, 2, 7 };
	std::list<int> lista2{ 9, 4, 5, 3 };

	superMerge(lista1, lista2);
	std::cout << std::endl;
	change(lista1);
	std::cout << std::endl;
	getElementPos(lista2, 3);
	std::cout << std::endl;
	std::list<int>lista3{ 1,4,6,6,2,7,3,7 };
	removeDuplicates(lista3);
	std::cout << std::endl;
	std::list<int>lista4{ 2,3,3,4,5,6,5,8 };
	removeElement(lista4, 5);
	std::cout << std::endl;
	std::list<int>palil{ 8,6,5,5,6,8 };
	//palindrome(palil);
}