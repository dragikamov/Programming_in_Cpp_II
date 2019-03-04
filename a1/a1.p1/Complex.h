/*
CH08-320143
a1 p1.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

class Complex
{
private:
    float real;
    float imag;
public:
    Complex();
    Complex(float, float = 0);
    friend std::ostream& operator<<(std::ostream &os, const Complex &a);
    friend std::istream& operator>>(std::istream &in, Complex &a);
    Complex operator+(const Complex &a);
    Complex operator-(const Complex &a);
    Complex operator*(const Complex &a);
};
