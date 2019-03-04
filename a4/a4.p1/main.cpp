/*
CH08-320143
a4 p1.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/


#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<char> v;
    for(int i=0;i<26;i++)
    {
        v.push_back('a'+i);
    }

    reverse(v.begin(),v.end());

    vector<char>::iterator it=v.begin();
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

    v.push_back('f');

    replace(v.begin(),v.end(),'f','$');

    it=v.begin();
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
