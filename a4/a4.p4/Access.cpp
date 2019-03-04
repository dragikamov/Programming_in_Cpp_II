/*
CH08-320143
a4 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "Access.h"

using namespace std;

void Access::activate(unsigned long code)
{
    l.insert(l.end(),code);
}

void Access::deactivate(unsigned long code)
{
    l.erase(code);
}

bool Access::isactive(unsigned long code) const
{
    set<unsigned long>::iterator it=l.begin();
    while(it!=l.end())
    {
        if(*it==code)
        {
            return true;
        }
        it++;
    }
    return false;
}
