#include <iostream>
#include <string>
#include "triangle.h"
#include "List.h"
#include "List.cpp"
#include "Source.cpp"

int main()
{
	List<int> list;
	list.push_back(7);
	list.push_back(9);
	list.push_front(81);
	int size = list.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << list.get(i) << "  ";
	}
	list.remove_last();
	size = list.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << list.get(i) << "  ";
	}
	list.set(1, -20);
	size = list.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << list.get(i) << "  ";
	}
	list.remove_first();
	size = list.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << list[i] << "  ";
	}
}