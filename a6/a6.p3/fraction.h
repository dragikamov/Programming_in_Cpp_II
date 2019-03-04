/*
CH08-320143
a6 p3.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef FRACTION_H_
#define FRACTION_H_
#include <bits/stdc++.h>

class Fraction {

private:
	int num;
	int den;
	int gcd(int a, int b);
	int lcm(int a, int b);

public:
	Fraction();
	Fraction(int, int = 1);
	Fraction(std::string);
	friend std::ostream& operator<<(std::ostream &os, const Fraction &a);
	friend std::istream& operator>>(std::istream  &in, Fraction &a);
	Fraction operator*(Fraction&);
	Fraction operator/(Fraction&);
	Fraction operator+(Fraction&);
	Fraction operator-(Fraction&);
	Fraction& operator=(Fraction&);
	bool operator<(const Fraction&);
	bool operator>(const Fraction&);
	bool operator<=(const Fraction&);
	bool operator>=(const Fraction&);
	bool operator==(const Fraction&);
	bool operator!=(const Fraction&);
};


#endif
