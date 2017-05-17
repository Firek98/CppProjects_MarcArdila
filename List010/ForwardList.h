#pragma once
class ForwardList
{
public:
	ForwardList();
	ForwardList(ForwardList &f);
	void push_front(int elem);
	void pop_front();
	~ForwardList();

	struct node
	{
		int info;
		node *next;
	};

	node *first;
};

