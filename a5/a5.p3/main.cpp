/*
CH08-320143
a5 p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

class Motor : public exception
{
public:
    virtual const char* what() const throw()
    {
        return "This motor has problems";
    }
};

class Car : public Motor
{
public:
    Car()
    {
        Motor m;
    }
};

class Garage : public Car
{
public:
    Garage()
    {
        try
        {
            throw Car();
        }
        catch(exception &e)
        {
            cerr<<e.what()<<endl;
            throw "The car in this garage has problems with the motor";
        }
    }
};

int main()
{
    try
    {
        Garage s;
    }
    catch(const char* str)
    {
        cerr<<str<<endl;
    }
    return 0;
}
