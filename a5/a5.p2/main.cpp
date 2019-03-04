/*
CH08-320143
a5 p2.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

struct OwnException : public exception
{
    char str[256];
    OwnException(const char* s = NULL)
    {
        if(s)
        {
            strcpy(str,s);
        }
        else
        {
            strcpy(str,"This is a default case exception");
        }
    }
    const char * what () const throw ()
    {
        return str;
    }
};

void func(const char &c)
{
    if(c=='1')
    {
        throw 'e';
    }
    else if(c=='2')
    {
        throw 99;
    }
    else if(c=='3')
    {
        throw false;
    }
    else
    {
        throw OwnException("This is an OwnException");
    }
}

int main()
{
    char c;
    cin>>c;
    try
    {
        func(c);
    }
    catch(int &n)
    {
        cerr<<"Exception caught in main: "<<n<<endl;
    }
    catch(char &ch)
    {
        cerr<<"Exception caught in main: "<<ch<<endl;
    }
    catch(bool &b)
    {
        cerr<<"Exception caught in main: "<<b<<endl;
    }
    catch(OwnException &e)
    {
        cerr<<"Exception caught in main: "<<e.what()<<endl;
    }
    return 0;
}
