#pragma once
class MyList
{
public:
	MyList();
	MyList(MyList &m);
	void push_front(int elem);
	void pop_front();
	~MyList();

	struct node
	{
		int info;
		node *next;
		node *previous;
	};

	int size;
	node *first;
	node *last;
};

