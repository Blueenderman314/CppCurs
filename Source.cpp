#include "triangle.h"
#include <cmath>

template <typename T>
T triangle<T>::get_a()
{
	return a;
}
template <typename T>
T triangle<T>::get_b()
{
	return b;
}
template <typename T>
T triangle<T>::get_c()
{
	return c;
}

double triangle<double>::perimetr()
{
	return (double)(a + b + c);
}
double triangle<double>::area()
{
	double p = perimetr()/2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
template <typename T>
triangle<T>::triangle(T a, T b, T c)
{
	if (a < b + c && b < a + c && c < a + b) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	else
	{
		this->a = -1;
		this->b = -1;
		this->c = -1;
	}
}
//сделать класс шаблонным, кроме ареа и периметр