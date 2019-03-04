/*
CH08-320143
a6 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "fraction.h"

using namespace std;

Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    if(d==0)
    {
        throw "Invalid data or logical error";
    }
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

Fraction::Fraction(string s)
{
    int n=0,d=0,i=0;
    bool neg=false;
    while(1)
    {
        if(s[i]=='/')
        {
            break;
        }
        else if(s[i]=='-')
        {
            neg=true;
        }
        else if(n>0 && s[i]>=48 && s[i]<=57)
        {
            n*=10;
            n+=(int)s[i]-48;
        }
        else if(s[i]>=48 && s[i]<=57)
        {
            n+=(int)s[i]-48;
        }
        else if(s[i]=='+'){}
        else
        {
            throw "Invalid data or logical error";
        }
        i++;
    }
    if(neg)
    {
        n*=(-1);
    }
    neg=false;
    i++;
    while(1)
    {
        if(s[i]=='\0')
        {
            break;
        }
        else if(s[i]=='-')
        {
            neg=true;
        }
        else if(d>0 && s[i]>=48 && s[i]<=57)
        {
            d*=10;
            d+=(int)s[i]-48;
        }
        else if(s[i]>=48 && s[i]<=57)
        {
            d+=(int)s[i]-48;
        }
        else if(s[i]=='+'){}
        else
        {
            throw "Invalid data or logical error";
        }
        i++;
    }
    if(neg)
    {
        d*=(-1);
    }
    if(d==0)
    {
        throw "Invalid data or logical error";
    }
    int tmp_gcd = gcd(n, d);
    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    int tmp_gcd = __gcd(a,b);

    return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);

}

ostream& operator<<(ostream &os, const Fraction &a)
{
    if(a.den==1)
    {
        os << a.num;
    }
    else
    {
        os << a.num << "/" << a.den;
    }
    return os;
}

istream &operator>>(istream  &in, Fraction &a)
{
    in >> a.num >> a.den;
    if(a.den==0)
    {
        throw "Invalid data or logical error";
    }
    return in;
}

Fraction Fraction::operator*(Fraction &a)
{
	int x,y,z;
	x=num*a.num;
	y=den*a.den;
	z=gcd(x,y);
    if(z!=1)
    {
        x/=z;
        y/=z;
    }
	Fraction res(x,y);
	return res;
}

Fraction Fraction::operator/(Fraction &a)
{
	int x,y,z;
	x=num*a.den;
	y=den*a.num;
	z=gcd(x,y);
    if(z!=1)
    {
        x/=z;
        y/=z;
    }
	Fraction res(x,y);
	return res;
}

Fraction Fraction::operator+(Fraction &a)
{
    int n,d1,d2,z;
    z=lcm(den,a.den);
    d1=z/den;
    d2=z/a.den;
    n=(num*d1)+(a.num*d2);
    Fraction res(n,z);
    return res;
}

Fraction Fraction::operator-(Fraction &a)
{
    int n,d1,d2,z;
    z=lcm(den,a.den);
    d1=z/den;
    d2=z/a.den;
    n=(num*d1)-(a.num*d2);
    Fraction res(n,z);
    return res;
}

Fraction& Fraction::operator=(Fraction &a)
{
	num=a.num;
	den=a.den;
	return *this;
}

bool Fraction::operator<(const Fraction &a)
{
	int x,y,z,d1,d2;
	z=lcm(den,a.den);
	d1=z/den;
	d2=z/a.den;
	x=num*d1;
	y=a.num*d2;
	if(x<y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Fraction::operator>(const Fraction &a)
{
	int x,y,z,d1,d2;
	z=lcm(den,a.den);
	d1=z/den;
	d2=z/a.den;
	x=num*d1;
	y=a.num*d2;
	if(x>y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Fraction::operator<=(const Fraction &a)
{
    int x,y,z,d1,d2;
	z=lcm(den,a.den);
	d1=z/den;
	d2=z/a.den;
	x=num*d1;
	y=a.num*d2;
	if(x<=y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Fraction::operator>=(const Fraction &a)
{
    int x,y,z,d1,d2;
	z=lcm(den,a.den);
	d1=z/den;
	d2=z/a.den;
	x=num*d1;
	y=a.num*d2;
	if(x>=y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Fraction::operator==(const Fraction &a)
{
    return num*a.den==a.num*den;
}

bool Fraction::operator!=(const Fraction &a)
{
    return num*a.den!=a.num*den;
}
