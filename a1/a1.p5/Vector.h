/*
CH08-320143
a1 p5.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef _VECTOR_H
#define _VECTOR_H
#include <bits/stdc++.h>
#include "Matrix.h"

class Vector
{
private:
    double *vsize;
    int num;
public:
    Vector();
    Vector(double*,int n);
    Vector(const Vector&);
    ~Vector();
    void print();
    void setV(double*);
    void setN(int);
    int getN();
    double getV(int);
    Vector add(const Vector&);
    double norm();
    Vector diff(const Vector&);
    double pro(const Vector&);
    friend std::istream& operator>>(std::istream &in, Vector &);
    friend std::ostream& operator<<(std::ostream &os, const Vector&);
    Vector operator*(Matrix&);
};

#endif
