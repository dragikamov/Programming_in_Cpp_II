/*
CH08-320143
a2 p3.cpp
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
    int n;
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
            cout<<"Error adding element"<<endl;
        }
    }
    cout<<"The current size of the queue is: "<<q.getSize()<<endl;
    cout<<"If you would like to resize the queue enter a number bigger than 0 with the size you want"<<endl;
    cin>>n;
    if(n>0)
    {
        q.resize(n);
    }
    cout<<"The current size of the queue is: "<<q.getSize()<<endl;
    int currSize=q.getNumEntries();
    cout<<"The front element is: "<<q.front()<<endl;
    cout<<"The back element is: "<<q.back()<<endl;
    cout<<"There are "<<q.getNumEntries()<<" entries."<<endl;
    for(int i=0; i<currSize; i++)
    {
        int ch; /// *
        if(q.pop(ch))
        {
            cout<<ch<<endl;
        }
        else
        {
            cout<<"Error outputting"<<endl;
        }
    }

    return 0;
}
