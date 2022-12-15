#pragma once

template <typename T>
class triangle
{
private:
	T a;
	T b;
	T c;

public:
	T get_a();
	T get_b();
	T get_c();

	double perimetr();
	double area();

	triangle(T a, T b, T c);
};//сделать класс шаблонным