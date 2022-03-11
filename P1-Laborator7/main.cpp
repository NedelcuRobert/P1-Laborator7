#include "complex.h"

int main() {
	CComplex z1;
	CComplex z2(5);
	CComplex z3(2, 3);
	CComplex z4 = z3;

	z1.afisare();

	z2.afisare();

	z3.afisare();

	z4.afisare();

	double rezu;

	rezu=~z3;

	cout << rezu << endl;
	CComplex d;

	d = z3 ^ 5;

	d.afisare();

	int dim;cout << "Introduceti dimensiunea:";cin >> dim;

	CComplex *a;
	a = new CComplex[dim];

	for (int i = 0;i < dim;i++) {
		a[i].citire();
	}

	CComplex rez;

	rez=rez.test(a,dim);

	rez.afisare();
	
	delete[] a;

	return 0;
}