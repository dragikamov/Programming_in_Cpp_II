/*
CH08-320143
a6 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "fraction.h"

using namespace std;

int main(void)
{
	try
	{
	    Fraction(2,0);
	}
	catch(const char *s)
	{
	    cout<<s<<endl;
	}
	try
	{
	    Fraction temp("Hello");
	}
	catch(const char *s)
	{
	    cout<<s<<endl;
	}
	return 0;
}
