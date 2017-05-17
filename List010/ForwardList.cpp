#include "ForwardList.h"



ForwardList::ForwardList()
{
	first = nullptr;
}

ForwardList::ForwardList(ForwardList & f)
{
	node *a = new node();
	node *aux = f.first;
	a->info = aux->info;
	a->next = nullptr;
	first = a;
	aux = aux->next;
	while (aux != nullptr)
	{
		node *t = new node();
		t->info = aux->info;
		t->next = a->next;
		first = t;
		aux = aux->next;
		a = t;
	}
}

void ForwardList::push_front(int elem)
{
	node *a = new node();
	a->next = first;
	a->info = elem;
	first = a;
}

void ForwardList::pop_front()
{
	node *a = first;
	first = a->next;
}


ForwardList::~ForwardList()
{
}
