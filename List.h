#pragma once
#include "Node.h"

template <typename T>
class List
{
private:
	Node<T>* first;

public:
	List() 
	{
		first = NULL;
	}  
	~List()
	{
		delete first;
	};

	void push_front(T info);
	void push_back(T info);
	void insert(int index, T info);

	void remove_first(); 
	void remove_last();
	void remove_at(int index);

	void set(int index, T info);
	T get(int index);
	int  size();

	void clear();
	T operator [](int index);
};