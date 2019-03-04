/*
CH08-320143
p8.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

class OwnException : public logic_error
{
public:
    char str[256];
    OwnException(const char* s = NULL) : logic_error(s)
    {
        strcpy(str,s);
    }
    const char * what () const throw ()
    {
        return str;
    }
};

void func()
{
    throw OwnException("This is an OwnException");
}

int main()
{
    try
    {
        func();
    }
    catch(OwnException &e)
    {
        cerr<<"Exception caught in main: "<<e.what()<<endl;
    }
    return 0;
}
