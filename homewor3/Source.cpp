#include "Header.h"

void Complex::Cin()
{
	cout << "¬ведите комплексное число:";
	double a, b;
	cin >> a >> b;
	this->im = a;
	this->re = b;

}

Complex Complex::sum(Complex n)
{
	Complex z;
	z.im = this->im + n.im;
	z.re = this->re + n.re;
	return z;
}

void Complex::Cout()
{
	cout << this->re << "+i" << this->im << endl;;
}

double Complex::modul()
{
	return sqrt(pow(this->im, 2) + pow(this->re, 2));
}

Complex Complex::ym(Complex n)
{
	Complex z;
	z.re = this->im * n.re + this->re * n.im;
	z.im = (this->im * n.im) * (-1) + this->re * n.re;
	return z;
}

Complex Complex::del(Complex n)
{
	Complex z;
	z.re = (this->im * n.re + this->re * (-1) * n.im) / (pow(n.re, 2) + pow(n.im, 2));
	z.im = ((this->im * n.im) * (-1) + this->re * n.re) / (pow(n.re, 2) + pow(n.im, 2));
	return z;
}

void Vector::Cin()
{
	int x1, y1, z1;
	cout << "¬ведите координаты вектора:";
	cin >> x1 >> y1 >> z1;
	this->x = x1;
	this->y = y1;
	this->z = z1;
}

Vector Vector::sum(Vector n)
{
	Vector q;
	q.x = this->x + n.x;
	q.y = this->y + n.y;
	q.z = this->z + n.z;
	return q;
}

void Vector::Cout()
{
	cout << "{" << this->x << ',' << this->y << ',' << this->z << '}' << endl;
}

double Vector::lenght()
{

	return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
}

double Vector::scalar(Vector q)
{
	double grad;
	cout << "¬ведите градусы между векторами:";
	cin >> grad;
	grad = grad * (3.14 / 180);
	return this->lenght() * q.lenght() * cos(grad);
}
void Circle::Cin()
{
	cout << "¬ведите радиус:";
	double a;
	cin >> a;
	this->R = a;
	

}

void Circle::Cout()
{
	cout << this->R << endl;

}

double Circle::square()
{
	double b;
	b = 3.14 * pow(this->R, 2);
	return b;
}
