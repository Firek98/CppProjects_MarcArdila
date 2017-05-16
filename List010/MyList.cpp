#include "MyList.h"

MyList::MyList()
{
	first = nullptr;
	last = nullptr;
	size = 0;
}

MyList::MyList(MyList &l)
{
	node *a = new node();
	node *aux = l.last;
	a->info = aux->info;
	size++;
	last = a;
	aux = aux->previous;
	while (size!=l.size)
	{
		node *t = new node();
		t->info = aux->info;
		size++;
		a = t;
		aux = aux->previous;
	}
	first = a;
}


void MyList::push_front(int elem)
{
	node *n = new node();
	n->info = elem;
	if (size == 0)
	{
		first = n;
		last = n;
		size++;
	}
	else
	{
		first->previous = n;
		n->previous = first;
		first = n;
		size++;
	}
}

void MyList::pop_front()
{
	delete MyList::first;
}

MyList::~MyList()
{
}
