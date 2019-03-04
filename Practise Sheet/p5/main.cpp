/*
CH08-320143
p5.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

class Building
{
public:
    //virtual int price() = 0;
    int price = 0;
    Building(int n)
    {
        //price()=n;
        price = n;
    }
};
class Neighborhood
{
public:
    std::vector<Building*> coll;
public:
    Neighborhood(){}
    ~Neighborhood(){}
    double overallprice()
    {
        double sum=0;
        for(int i=0;i<coll.size();i++)
        {
            //sum+=coll[i]->price();
            sum+=coll[i]->price;
        }
        return sum;
    }
};

int main()
{
    Neighborhood n;
    Building a(30);
    Building b(90);
    n.coll.push_back(&a);
    n.coll.push_back(&b);
    cout<<n.overallprice()<<endl;
    return 0;
}
