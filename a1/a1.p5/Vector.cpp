/*
CH08-320143
a1 p5.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "Vector.h"
#include "Matrix.h"

using namespace std;

Vector::Vector()
{
    num=0;
}

void Vector::setN(int n)
{
    num=n;
}

Vector::Vector(double *x, int n)
{
    vsize=new double[n];
    num=n;
    for(int i=0; i<n; i++)
    {
        vsize[i]=x[i];
    }
}

Vector::Vector(const Vector& x)
{
    num=x.num;
    vsize=new double[x.num];
    for(int i=0; i<num; i++)
    {
        vsize[i]=x.vsize[i];
    }
}

Vector::~Vector()
{
    delete []vsize;
}

void Vector::print()
{
    for(int i=0; i<num; i++)
    {
        if(i==0)
        {
            cout<<"("<<vsize[i]<<", ";
        }
        else if(i==(num-1))
        {
            cout<<vsize[i]<<")"<<endl;
        }
        else
        {
            cout<<vsize[i]<<", ";
        }
    }
}

void Vector::setV(double *x)
{
    vsize=new double[num];
    for(int i=0; i<num; i++)
    {
        vsize[i]=x[i];
    }
}

int Vector::getN()
{
    return this->num;
}

double Vector::getV(int n)
{
    return vsize[n];
}

Vector Vector::add(const Vector &x)
{
    double *arr;
    arr=new double[num];
    for(int i=0; i<num; i++)
    {
        arr[i]=vsize[i]+x.vsize[i];
    }
    Vector b;
    b.num=num;
    b.setV(arr);
    delete []arr;
    return b;
}

double Vector::norm()
{
    double s=0;
    for(int i=0; i<num; i++)
    {
        s+=vsize[i]*vsize[i];
    }
    s=sqrt(s);
    return s;
}

Vector Vector::diff(const Vector &x)
{
    double *arr;
    arr=new double[num];
    for(int i=0; i<num; i++)
    {
        arr[i]=vsize[i]-x.vsize[i];
    }
    Vector a;
    a.num=num;
    a.setV(arr);
    delete []arr;
    return a;
}

double Vector::pro(const Vector &x)
{
    double s=0;
    for(int i=0; i<num; i++)
    {
        s+=vsize[i]*x.vsize[i];
    }
    return s;
}

istream& operator>>(istream &in, Vector &x)
{
    in>>x.num;
    x.vsize=new double[x.num];
    for(int i=0; i<x.num; i++)
    {
        in>>x.vsize[i];
    }
    return in;
}

/*The printing of the vector is not considering if
the vector is a column vector, it will always print
as the vector is a row vector
*/
ostream& operator<<(ostream &os, const Vector &x)
{
    if(x.num==0)
    {
        os<<"This cannot be multiplied"<<endl;
    }
    else
    {
        for(int i=0; i<x.num; i++)
        {
            os<<x.vsize[i]<<" ";
        }
        os<<endl;
    }
    return os;
}

///Here I am taking as the vector is a row vector
Vector Vector::operator*(Matrix &b)
{
    if(this->num==b.getX())
    {
        double *vec=new double[b.getY()];
        for(int i=0; i<b.getY(); i++)
        {
            vec[i]=0;
            for(int j=0; j<this->num; j++)
            {
                vec[i]+=this->vsize[j]*b.getMat(j,i);
            }
        }
        return Vector(vec,b.getY());
    }
    else
    {
        return Vector();
    }
}

