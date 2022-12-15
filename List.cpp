#pragma once
#include "List.h"

template <typename T>
void List<T>::push_front(T info)
{
	if (first == 0)
	{
		first = new Node<T>(info);
	}
	else
	{
		Node<T>* temp = new Node<T>(info);
		temp->set_next(first);
		first = temp;
	}
}

template <typename T>
void List<T>::push_back(T info)
{
	if (first == NULL)
	{
		first = new Node<T>(info);
		return;
	}
	Node<T>* cur = first;
	while (cur->get_next())
	{
		cur = cur->get_next();
	}
	Node<T>* temp = new Node<T>(info);
	cur->set_next(temp);
}

template <typename T>
void List<T>::insert(int index, T info)
{
	if (first == NULL)
	{
		first = new Node<T>(index);
		return;
	}
	Node<T>* cur = first;
	int counter = 0;
	while (counter < index && cur->get_next())
	{
		cur = cur->get_next();
	}
	cur->insert_next(info);
}

template <typename T>
void List<T>::remove_first()
{
	if (first != 0)
	{
		Node<T>* temp = first->get_next();
		first->set_next(NULL);
		delete first;
		first = temp;
	}

}
template <typename T>
void List<T>::remove_last()
{
	if (first == NULL)
	{
		return;
	}
	if (first->get_next() == NULL)
	{
		remove_first();
		return;
	}
	Node<T>* cur = first;
	while (cur->get_next()->get_next())
	{
		cur = cur->get_next();
	}
	cur->remove_next();
}

template <typename T>
void List<T>::remove_at(int index)
{
	if (first == NULL)
	{
		return;
	}
	Node<T>* cur = first;
	int counter = 0;
	while (counter < index && cur->get_next())
	{
		counter++;
		cur = cur->get_next();
	}
	cur->remove_next();

}

template <typename T>
void List<T>::set(int index, T info)
{
	if (first == NULL)
	{
		return;
	}
	Node<T>* cur = first;
	int counter = 0;
	while (counter < index && cur->get_next())
	{
		counter++;
		cur = cur->get_next();
	}
	cur->set_info(info);

}

template <typename T>
T List<T>::get(int index)
{
	if (first == NULL)
	{
		return NULL;
	}
	Node<T>* cur = first;
	int counter = 0;
	while (counter < index && cur->get_next())
	{
		counter++;
		cur = cur->get_next();
	}
	return cur->get_info();
}

template <typename T>
int List<T>::size()
{
	int counter = 0;
	Node<T>* cur = first;
	while (cur)
	{
		counter++;
		cur = cur->get_next();
	}
	return counter;
}

template <typename T>
void List<T>::clear()
{
	if (first == NULL)
	{
		return;
	}
	delete first;
	first = NULL;
}

template<typename T>
T List<T>::operator[](int index)
{
	return get(index);
}