/*
CH08-320143
a2 p2.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "Queue.h"

using namespace std;
/*
Because we don't know the type of the input I will
put stars where we should put the type of the variable
that we are inputting.
*/
int main()
{
    cout<<"How many inputs do you want in the queue"<<endl;
    int n,currSize;
    cin>>n;
    Queue<int>q(n); /// *
    int c; /// *
    for(int i=0; i<n; i++)
    {
        cin>>c;
        if(q.push(c))
        {
            cout<<"Successfully added"<<endl;
        }
        else
        {
            cout<<"Error adding"<<endl;
        }
    }
    cout<<"Do you want to enter more elements(0 for no and any other integer for that many inputs)"<<endl;
    cin>>n;
    currSize=q.getNumEntries();
    if(n<=0)
    {
        cout<<"The front element is: "<<q.front()<<endl;
        cout<<"The back element is: "<<q.back()<<endl;
        cout<<"There are "<<q.getNumEntries()<<" entries."<<endl;
        for(int i=0; i<currSize; i++)
        {
            int ch; /// *
            if(q.pop(ch)==true)
            {
                cout<<ch<<endl;
            }
            else
            {
                cout<<"Error outputting"<<endl;
            }
        }
    }
    else
    {
        q.extend(n);
        for(int i=0; i<n; i++)
        {
            int ch; /// *
            cin>>ch;
            if(q.push(ch))
            {
                cout<<"Successfully added"<<endl;
            }
            else
            {
                cout<<"Error inputting in the queue"<<endl;
            }
        }
        cout<<"The front element is: "<<q.front()<<endl;
        cout<<"The back element is: "<<q.back()<<endl;
        cout<<"There are "<<q.getNumEntries()<<" entries."<<endl;
        currSize=q.getNumEntries();
        for(int i=0; i<currSize; i++)
        {
            int ch; /// *
            if(q.pop(ch)==true)
            {
                cout<<ch<<endl;
            }
            else
            {
                cout<<"Error outputting"<<endl;
            }
        }
    }
    return 0;
}
