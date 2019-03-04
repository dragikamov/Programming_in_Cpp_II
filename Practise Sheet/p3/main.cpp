/*
CH08-320143
p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> q;
    for(int i=5;i<=500;i+=5)
    {
        q.push_back(i);
    }
    deque<int>::iterator iter=q.begin();
    while(iter!=q.end())
    {
        cout<<*iter<<" ";
        iter++;
    }
    cout<<endl;
    return 0;
}
