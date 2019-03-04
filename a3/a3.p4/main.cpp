/*
CH08-320143
a3 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<double>A;
    while(1)
    {
        double temp;
        cin>>temp;
        if(temp==0)
        {
            break;
        }
        else if(temp<0)
        {
            A.push_back(temp);
        }
        else
        {
            A.push_front(temp);
        }
    }
    deque<double>::iterator it=A.begin();
    deque<double>::iterator aEnd=A.end();
    aEnd--;
    int n=0;
    while(it!=A.end())
    {
        if(*it>0)
        {
            n++;
        }
        if(it==aEnd)
        {
            cout<<*it<<endl;
        }
        else
        {
            cout<<*it<<" ";
        }
        it++;
    }
    it=A.begin()+n;
    A.insert(it,0);

    it=A.begin();
    aEnd=A.end();
    aEnd--;
    while(it!=A.end())
    {
        if(it==aEnd)
        {
            cout<<*it<<endl;
        }
        else
        {
            cout<<*it<<";";
        }
        it++;
    }
    return 0;
}
