#include "MyQueue.h"



MyQueue::MyQueue()
{
	first = nullptr;
	last = nullptr;
	size = 0;
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


MyQueue::~MyQueue()
{
}
