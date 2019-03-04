/*
CH08-320143
a4 p2.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(NULL));
    set<int>n;
    while(n.size()!=6)
    {
        int r=rand()%49+1;
        n.insert(n.end(),r);
    }
    set<int>::iterator it=n.begin();
    for(it=n.begin();it!=n.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
