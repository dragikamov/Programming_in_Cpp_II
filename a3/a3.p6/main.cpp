/*
CH08-320143
a3 p6.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

template<class T>
void print_queue(T &q)
{
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

class comp
{
public:
    bool operator()(const int &a, const int &b)
    {
        return a>b;
    }
};

int main()
{
    priority_queue<int>q;
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)
        {
            break;
        }
        q.push(n);
    }
    cout<<"The maximum element is: "<<q.top()<<endl;
    print_queue(q);

    priority_queue<int,vector<int>,comp>q2;
    for(int i=0;i<10;i++)
    {
        q2.push(i);
    }
    print_queue(q2);
    return 0;
}
