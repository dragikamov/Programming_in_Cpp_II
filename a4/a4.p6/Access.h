/*
CH08-320143
a4 p6.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

class Access
{
public:
    void activate(unsigned long code, unsigned int level);
    void deactivate(unsigned long code);
    bool isactive(unsigned long code, unsigned int level);
private:
    set<unsigned long>l;
    map<unsigned long, int>q;
    unsigned int mapVal(unsigned long mat);
};
