/*
CH08-320143
a3 p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int>a,b;
    ofstream o;
    if(!(o.is_open()))
    {
        o.open("listB.txt",ios::in);
        if(o.bad())
        {
            cerr<<"Cannot open file!"<<endl;
        }
    }
    while(1)
    {
        int temp;
        cin>>temp;
        if(temp<=0)
        {
            break;
        }
        a.push_front(temp);
        b.push_back(temp);
    }
    list<int>::iterator itA=a.begin();
    list<int>::iterator itB=b.end();
    itB--;

    list<int>::iterator aEnd=a.end();
    aEnd--;
    while(itA!=a.end())
    {
        if(itA==aEnd)
        {
            cout<<*itA<<endl;
            o<<*itB<<endl;
        }
        else
        {
            cout<<*itA<<" ";
            o<<*itB<<" ";
        }
        itA++;
        itB--;
    }
    list<int>::iterator bEnd=b.end();
    bEnd--;
    swap(*a.begin(),*aEnd);
    swap(*b.begin(),*bEnd);

    itA=a.begin();
    itB=b.begin();
    while(itA!=a.end())
    {
        if(itA==aEnd)
        {
            cout<<*itA<<endl;
        }
        else
        {
            cout<<*itA<<",";
        }
        itA++;
    }

    while(itB!=b.end())
    {
        if(itB==bEnd)
        {
            cout<<*itB<<endl;
        }
        else
        {
            cout<<*itB<<",";
        }
        itB++;
    }

    a.merge(b);
    a.sort();
    itA=a.begin();
    aEnd=a.end();
    aEnd--;
    while(itA!=a.end())
    {
        if(itA==aEnd)
        {
            cout<<*itA<<endl;
        }
        else
        {
            cout<<*itA<<" ";
        }
        itA++;
    }
    return 0;
}
