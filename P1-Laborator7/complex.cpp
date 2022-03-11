#include "complex.h"

CComplex::CComplex() {
	real = 0;
	imag = 0;
}

CComplex::CComplex(double r,double i)
{
	real = r;
	imag = i;
}

CComplex CComplex::operator=(CComplex z){
	real = z.real;
	imag = z.imag;
	return z;
}

CComplex CComplex::operator+(CComplex z) {
	return CComplex(real + z.real, imag + z.imag);
}

double operator~(CComplex z) {
	return sqrt(pow(z.real, 2) + pow(z.imag, 2));
}

CComplex CComplex::operator*(CComplex a) {
	CComplex rez;
	rez.real = real * a.real - imag * a.imag;
	rez.imag = real * a.imag + a.real * imag;
	return rez;
}

CComplex CComplex::operator/(CComplex a){
   CComplex rez;
	rez.real = (real * a.real + imag * a.imag) / (a.real * a.real + a.imag * a.imag);
	rez.imag = (imag * a.real - real * a.imag) / (a.real * a.real + a.imag * a.imag);
	return rez;
}


CComplex operator^(CComplex z,int n) {
	CComplex rez = z;
	for (int i = 0;i < n-1;i++) {
		rez = rez * z;
	}
	return rez;
}

void CComplex::citire() {
	cout << "Real:";
	cin >> real;
	cout << "Imag:";
	cin >> imag;
}

void CComplex::afisare() {
	if (imag >= 0) {
		cout << real << "+" << imag << "i" << endl;
	}
	else {
		cout << real << imag << "i" << endl;
	}

}

CComplex CComplex::test(CComplex* a, int dim) {
	CComplex rez;
	CComplex e1,e2;
	for (int i = 0;i < dim;i++) {
		e1 = (a[i] ^ 3);
		if ((i + 1) < dim) {
			e2 = (a[i + 1] ^ 4);
		}
		i++;
	}
	rez = e1 / e2;
	return rez;
}





