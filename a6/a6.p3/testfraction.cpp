/*
CH08-320143
a6 p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction a,b;
	cout<<"Enter the nominator and denominator for the first fraction";
	cout<<" as separate integers"<<endl;
	try
	{
	    cin>>a;
	}
	catch(const char *s)
	{
	    cout<<s<<endl;
	    exit(1);
	}
	cout<<"Enter the nominator and denominator for the second fraction";
	cout<<" as a string"<<endl;
	string str;
    cin>>str;
	try
	{
	    Fraction temp(str);
	    b=temp;
	}
	catch(const char *s)
	{
	    cout<<s<<endl;
	    exit(1);
	}

	if(a>b)
    {
        cout<<a<<" is larger than "<<b<<endl;
    }
    else if(a<b)
    {
        cout<<a<<" is smaller than "<<b<<endl;
    }

    if(a>=b)
    {
        cout<<a<<" is larger or equal to "<<b<<endl;
    }
    else if(a<=b)
    {
        cout<<a<<" is smaller or equal to "<<b<<endl;
    }

    if(a==b)
    {
        cout<<a<<" is equal to "<<b<<endl;
    }
    else if(a!=b)
    {
        cout<<a<<" is not equal to "<<b<<endl;
    }

    cout<<"The addition of the two fractions:"<<endl;
    Fraction sum=a+b;
    cout<<sum<<endl;

    cout<<"The difference of the two fractions:"<<endl;
    Fraction diff=a-b;
    cout<<diff<<endl;

    cout<<"The multiplication of the two fractions:"<<endl;
    Fraction mul=a*b;
    cout<<mul<<endl;

    cout<<"The division of the two fractions:"<<endl;
    Fraction div=a/b;
    cout<<div<<endl;

    return 0;
}
