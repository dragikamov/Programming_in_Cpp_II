/*
CH08-320143
a1 p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
using namespace std;

class A
{
    int x;
public:
    void setX(int i)
    {
        x = i;
    }
    void print()
    {
        cout << x;
    }
};
/// I added here virtual
class B:  virtual public A
{
public:
    B()
    {
        setX(10);
    }
};
/// Also here
class C:  virtual public A
{
public:
    C()
    {
        setX(20);
    }
};

class D: public B, public C
{
};
/* And now it is not making a problem.
The problem was happening because of ambiguousness,
the class D didn't know from which class to call from,
either B or C and with the change I made we are creating
an unambiguousness.
*/
int main()
{
    D d;
    d.print();
    return 0;
}
