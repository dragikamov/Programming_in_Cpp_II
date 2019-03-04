/*
CH08-320143
a4 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "Access.h"

using namespace std;

int main()
{
    Access a;
    a.activate(12346);
    a.activate(999999);
    a.activate(187692);

    int n;
    while(1)
    {
        cin>>n;
        if(a.isactive(n))
        {
            cout<<"Door opened!"<<endl;
            a.deactivate(n);
            break;
        }
        else
        {
            cout<<"Wrong code. Try again!"<<endl;
        }
    }

    a.deactivate(999999);
    a.activate(111111);

    while(1)
    {
        cin>>n;
        if(a.isactive(n))
        {
            cout<<"Door opened!"<<endl;
            a.deactivate(n);
            break;
        }
        else
        {
            cout<<"Wrong code. Try again!"<<endl;
        }
    }
    return 0;
}
