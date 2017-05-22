#include "MyQueue.h"



MyQueue::MyQueue()
{
	first = nullptr;
	last = nullptr;
	size = 0;
}

MyQueue::MyQueue(MyQueue & q)
{
	node *aux = q.first;

	while (q.size != size)
	{
		push(aux->info);
		aux = aux->next;
	}
}

void MyQueue::push(int value)
{
	node *a = new node();

	a->info = value;

	if (size == 0)
	{
		first = a;
		last = a;
		size++;
	}
	else
	{
		last->next = a;
		last = a;
		size++;
	}
}

void MyQueue::pop()
{
	node *a = first;
	first = a->next;
	delete a;
	size--;
	if (size == 0)
	{
		last == nullptr;
	}
}

int MyQueue::tamaño()
{
	return size;
}

int MyQueue::front()
{
	return first->info;
}


int MyQueue::back()
{
	return last->info;
}

MyQueue::~MyQueue()
{
	while (size!=0)
	{
		pop();
	}
}
