#pragma once
#include "complex.h"

Complex::Complex(float x, float y) {
	_real = x;
	_complex = y;
}

void Complex::PrzedstawSie() {
	std::cout << "[" << _real << "," << _complex << "]" << std::endl;
}

Complex Complex::operator + (const Complex& right) {
	return Complex(_real + right._real, _complex + right._complex);
}

Complex Complex::operator - (const Complex& right) {
	return Complex(_real - right._real, _complex - right._complex);
}

ostream& operator << (ostream& p, const Complex& Liczba)
{
	p << "[" << Liczba._real << "," << Liczba._complex << "]" << std::endl;
	return p;
}