#pragma once
class MyQueue
{
public:
	struct node
	{
		int info;
		node *next;
	};

	node *first;
	node *last;
	int size;

	MyQueue();
	void push(int value);
	void pop();
	int tamaño();
	int front();
	int back();
	~MyQueue();
	
};

