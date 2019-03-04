/*
CH08-320143
a1 p1.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "Complex.h"

using namespace std;

int main()
{
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
    Complex a,b;
    f1>>a;
    f2>>b;
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    o<<a+b<<endl;
    o<<a-b<<endl;
    o<<a*b<<endl;
    return 0;
}
