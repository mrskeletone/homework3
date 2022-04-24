#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <math.h>
using namespace std;

class Complex
{
public:
	void Cin();
	Complex sum(Complex n);
	void Cout();
	double modul();
	Complex ym(Complex n);
	Complex del(Complex n);
private:
	double im, re;
};
class Vector
{
public:
	void Cin();
	Vector sum(Vector n);
	void Cout();
	double lenght();
	double scalar(Vector q);
private:
	double x, y, z;
};
class Circle
{
public:
	void Cin();
	void Cout();
	double square();
private:
	double R;
};
#endif // !COMPLEX_H
