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
	~MyQueue();
	
};

