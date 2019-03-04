/*
CH08-320143
a1 p1.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "Complex.h"

using namespace std;

Complex::Complex()
{
    //cout<<"Empty constructor called"<<endl;
}

Complex::Complex(float a, float b)
{
    real=a;
    imag=b;
}

ostream& operator<<(ostream &os, const Complex &a)
{
    if(a.imag)
    {
        os << noshowpos << a.real << showpos << a.imag << "i";
    }
    else
    {
        os << noshowpos << a.real;
    }
    return os;
}

istream& operator>>(istream &in, Complex &a)
{
    in >> a.real >> a.imag;
    return in;
}

Complex Complex::operator+(const Complex &a)
{
    return Complex(this->real+a.real, this->imag+a.imag);
}

Complex Complex::operator-(const Complex &a)
{
    return Complex(this->real-a.real, this->imag-a.imag);
}

Complex Complex::operator*(const Complex &a)
{
    return Complex(this->real * a.real - this->imag * a.imag,
                   this->real * a.imag + this->imag * a.real);
}
