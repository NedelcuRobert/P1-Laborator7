#include <iostream>
#include <math.h>

using namespace std;

class CComplex
{
private:
	double real;
	double imag;
public:
	CComplex();
	CComplex(double, double = 0);
	~CComplex() {};

	CComplex operator=(CComplex);
	CComplex operator+(CComplex);

	friend double operator~(CComplex);

	CComplex operator*(CComplex);
	CComplex operator/(CComplex);

	friend CComplex operator^(CComplex, int);

	void citire();

	void afisare();

	CComplex test(CComplex*, int);
};

