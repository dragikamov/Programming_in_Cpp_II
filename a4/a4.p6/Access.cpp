/*
CH08-320143
a4 p6.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "Access.h"

using namespace std;

void Access::activate(unsigned long code, unsigned int level)
{
    l.insert(l.end(),code);
    q[code]=level;
}

void Access::deactivate(unsigned long code)
{
    l.erase(code);
}

bool Access::isactive(unsigned long code, unsigned int level)
{
    set<unsigned long>::iterator it=l.begin();
    while(it!=l.end())
    {
        if(*it==code)
        {
            if(mapVal(*it)>=level)
            {
                return true;
            }
            break;
        }
        it++;
    }
    return false;
}

unsigned int Access::mapVal(unsigned long mat)
{
    return q[mat];
}
