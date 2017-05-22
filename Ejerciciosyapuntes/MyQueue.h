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
	MyQueue(MyQueue &q);
	void push(int value);
	void pop();
	int tama�o();
	int front();
	int back();
	~MyQueue();
	
};

