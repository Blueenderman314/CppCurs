#include <iostream>
#pragma once

template <typename T>
class Node
{
private:
	T info;
	Node<T>* next;

public:
	Node(T info)
	{
		this->info = info;
		next = NULL;
	}

	T get_info()
	{
		return info;
	};

	void set_info(T new_info)
	{
		info = new_info;
	};

	void set_next(Node<T>*new_info)
	{
		next = new_info;
	};

	void insert_next(T new_info)
	{
		Node<T>* temp = next;
		next = new Node<T>(new_info);
		next->next = temp;
	};

	void remove_next()
	{
		Node<T>* temp = next->next;
		next->next = NULL;
		delete next;
		next = temp;
	};

	Node<T>* get_next()
	{
		return next;
	};

	~Node()
	{
		if(next)
		{
			delete next;
		}
	};
};
