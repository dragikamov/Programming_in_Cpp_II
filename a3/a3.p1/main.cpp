/*
CH08-320143
a3 p1.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    vector <string> v;
    while(1)
    {
        cin>>str;
        if(str=="stop")
        {
            break;
        }
        v.push_back(str);
    }
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            cout<<v[i]<<endl;
        }
        else
        {
            cout<<v[i]<<", ";
        }
    }
    vector<string>::iterator it=v.begin();
    while(it!=v.end())
    {
        if(it==v.end()-1)
        {
            cout<<*it<<endl;
        }
        else
        {
            cout<<*it<<" ";
        }
        it++;
    }
    return 0;
}
