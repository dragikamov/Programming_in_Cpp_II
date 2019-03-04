/*
CH08-320143
a1 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
using namespace std;

class A
{
    int x;
public:
    A(int i)
    {
        x = i;
    }
    void print()
    {
        cout << x;
    }
};

class B: virtual public A
{
public:
    B():A(10) {  }
};

class C:  virtual public A
{
public:
    C():A(10) {  }
};

class D: public B, public C
{
public:
    /*Since no constructors for B and C were called
    there was no connection between D and A and that's
    why I had to implement a constructor for D.
    */
    D():A(10),B(),C(){}
};

int main()
{
    D d;
    d.print();
    return 0;
}
