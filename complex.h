#pragma once

#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

class Complex {
private:
	float _real;
	float _complex;
public:
	Complex(float x,float y);
	void PrzedstawSie();
	Complex operator+(const Complex& right);
	Complex operator-(const Complex& right);
	friend ostream& operator << (ostream& p, const Complex& Liczba);
};