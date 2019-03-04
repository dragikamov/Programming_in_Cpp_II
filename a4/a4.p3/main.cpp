/*
CH08-320143
a4 p3.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int>A;
    multiset<int>B;
    while(1)
    {
        int n;
        cin>>n;
        if(n<0)
        {
            break;
        }
        if(A.find(n)!=A.end())
        {
            B.insert(B.end(),n);
        }
        else
        {
            A.insert(A.end(),n);
        }
    }

    ///Printing A and B before making changes to them
    set<int>::iterator it=A.begin();
    for(it=A.begin();it!=A.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    multiset<int>::iterator itB=B.begin();
    for(itB=B.begin();itB!=B.end();itB++)
    {
        cout<<*itB<<" ";
    }
    cout<<endl;

    ///Erasing 11 from A and B
    A.erase(11);
    B.erase(11);

    ///Printing A and B after erasing 11
    it=A.begin();
    for(it=A.begin();it!=A.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    itB=B.begin();
    for(itB=B.begin();itB!=B.end();itB++)
    {
        cout<<*itB<<" ";
    }
    cout<<endl;

    ///Adding 5 and 421 to A
    A.insert(A.end(),5);
    A.insert(A.end(),421);

    ///going through each element of A and B
    ///and putting them into the correct multiset
    ///or set
    multiset<int>res,res2;
    set<int>res3,res4;
    it=A.begin();
    for(it=A.begin();it!=A.end();it++)
    {
        if(res.find(*it)==res.end())
        {
            res.insert(res.end(),*it);
        }
        if(B.find(*it)==B.end())
        {
            res3.insert(res3.end(),*it);
            res4.insert(res4.end(),*it);
        }
    }
    itB=B.begin();
    for(itB=B.begin();itB!=B.end();itB++)
    {
        if(res.find(*itB)==res.end())
        {
            res.insert(res.end(),*itB);
        }
        if(A.find(*itB)!=A.end())
        {
            res2.insert(res2.end(),*itB);
        }
        if(A.find(*itB)==A.end())
        {
            res4.insert(res4.end(),*itB);
        }
    }

    ///res is the union
    itB=res.begin();
    for(itB=res.begin();itB!=res.end();itB++)
    {
        cout<<*itB<<" ";
    }
    cout<<endl;

    ///res2 is the intersession
    itB=res2.begin();
    for(itB=res2.begin();itB!=res2.end();itB++)
    {
        cout<<*itB<<" ";
    }
    cout<<endl;

    ///res3 is the difference of A and B
    it=res3.begin();
    for(it=res3.begin();it!=res3.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    ///res4 is the symmetric difference of A and B
    it=res4.begin();
    for(it=res4.begin();it!=res4.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
