/*
CH08-320143
a4 p6.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "Access.h"

using namespace std;

int main()
{
    Access a;
    a.activate(12346,1);
    a.activate(999999,5);
    a.activate(187692,9);

    int n;
    while(1)
    {
        cin>>n;
        if(a.isactive(n,5))
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

    a.activate(999999,8);
    a.activate(111111,7);

    while(1)
    {
        cin>>n;
        if(a.isactive(n,7))
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
