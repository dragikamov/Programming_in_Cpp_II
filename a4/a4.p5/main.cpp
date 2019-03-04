/*
CH08-320143
a4 p5.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream i;
    if(!(i.is_open()))
    {
        i.open("data.txt",ios::in);
        if(i.bad())
        {
            cerr<<"Cannot open file!"<<endl;
        }
    }
    map<unsigned long, string>people;
    while(!i.eof())
    {
        unsigned long mat;
        string name;
        i>>mat>>name;
        people[mat]=name;
    }

    cout<<"Enter a matriculation number:"<<endl;
    unsigned long mat;
    cin>>mat;
    if(people.find(mat)!=people.end())
    {
        cout<<people[mat]<<endl;
    }
    else
    {
        cout<<"Matriculation number not found!"<<endl;
    }
    return 0;
}
