/*
CH08-320143
a3 p5.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "WindGauge.h"

using namespace std;

WindGauge::WindGauge(int period)
{
    this->period=period;
}

void WindGauge::currentWindSpeed(int speed)
{
    if((int)x.size()==this->period)
    {
        x.pop_back();
    }
    x.push_front(speed);
}

int WindGauge::highest() const
{
    deque<int>::const_iterator it=x.begin();
    int h=x.front();
    while(it!=x.end())
    {
        if(*it>h)
        {
            h=*it;
        }
        it++;
    }
    return h;
}

int WindGauge::lowest() const
{
    deque<int>::const_iterator it=x.begin();
    int m=x.front();
    while(it!=x.end())
    {
        if(*it<m)
        {
            m=*it;
        }
        it++;
    }
    return m;
}

int WindGauge::average() const
{
    deque<int>::const_iterator it=x.begin();
    int sum=0,n=0;
    while(it!=x.end())
    {
        sum+=*it;
        n++;
        it++;
    }
    return sum/n;
}

void WindGauge::dump() const
{
    cout<<"Lowest is "<<this->lowest()<<endl;
    cout<<"Average is "<<this->average()<<endl;
    cout<<"Highest is "<<this->highest()<<endl;
}
