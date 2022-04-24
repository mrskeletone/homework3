#include <iostream>
#include <iostream>
#include "Header.h"
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	Complex a, b, c, s, x; double q, w, e;
	Vector a1, b1, c1;
	Circle a2; double square;
	a.Cin();
	b.Cin();
	c = a.sum(b);
	q = a.modul();
	s = a.ym(b);
	x = a.del(b);
	c.Cout();
	s.Cout();
	x.Cout();
	cout << q << endl;
	cout << "------------------------" << endl;
	a1.Cin();
	b1.Cin();
	c1 = a1.sum(b1);
	w = a1.lenght();
	e = a1.scalar(b1);
	c1.Cout();
	cout << w << ' ' << e;
	a2.Cin();
	square = a2.square();
	a2.Cout();
	cout << square;
}
