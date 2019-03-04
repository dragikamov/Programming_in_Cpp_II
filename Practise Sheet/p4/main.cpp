/*
CH08-320143
p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<string> q;
    while(1)
    {
        string s;
        cin>>s;
        if(s=="zz" || s=="ZZ")
        {
            break;
        }
        q.push_back(s);
    }
    q.sort();
    list<string>::iterator it=q.begin();
    while(it!=q.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    return 0;
}
