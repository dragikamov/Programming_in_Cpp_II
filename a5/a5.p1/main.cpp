/*
CH08-320143
a5 p1.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<char>q;
    for(int i=0;i<15;i++)
    {
        q.push_back('@');
    }
    try
    {
        cout<<q.at(15)<<endl;
    }
    catch(out_of_range &e)
    {
        cerr<<e.what()<<endl;
    }
    return 0;
}
