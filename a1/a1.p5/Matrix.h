/*
CH08-320143
a1 p5.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include "Vector.h"
#ifndef _MATRIX_H
#define _MATRIX_H

class Vector;

class Matrix
{
private:
    int x,y;
    double **mat;
public:
    Matrix();
    ~Matrix();
    int getX();
    int getY();
    int getMat(int,int);
    friend std::istream& operator>>(std::istream &in, Matrix&);
    friend std::ostream& operator<<(std::ostream &os, Matrix&);
    Vector operator*(Vector&);
};

#endif
