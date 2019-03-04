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

int main()
{
    Vector v1;
    Matrix m1;
    ifstream f1,f2;
    ofstream o;
    if(!(f1.is_open()))
    {
        f1.open("in1.txt",ios::in);
        if(f1.bad())
        {
            cerr<<"Cannot open file!"<<endl;
        }
    }
    if(!(f2.is_open()))
    {
        f2.open("in2.txt",ios::out);
        if(f2.bad())
        {
            cerr<<"Cannot open file!"<<endl;
        }
    }
    if(!(o.is_open()))
    {
        o.open("output.txt",ios::in);
        if(o.bad())
        {
            cerr<<"Cannot open file!"<<endl;
        }
    }
    f1>>v1;
    f2>>m1;
    o<<"Vector * matrix"<<endl<<v1*m1<<endl;
    o<<"Matrix * vector"<<endl<<m1*v1<<endl;
    return 0;
}
