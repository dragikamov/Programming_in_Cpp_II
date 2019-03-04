/*
CH08-320143
a3 p5.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
using namespace std;

class WindGauge
{
public:
    WindGauge(int period = 10);
    void currentWindSpeed(int speed);
    int highest() const;
    int lowest() const;
    int average() const;
    void dump() const;
private:
    int period;
    deque<int>x;
};

