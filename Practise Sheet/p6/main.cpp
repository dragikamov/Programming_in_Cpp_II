/*
CH08-320143
p6.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

class worker
{
private:
    int val;
    string name;
public:
    worker(int v,string n)
    {
        val=v;
        name=n;
    }
    friend ostream& operator<<(ostream &os,const worker w)
    {
        os<<w.val<<" "<<w.name<<endl;
        return os;
    }
};

int main()
{
    worker a(234, "John McEnroe");
    worker b(324, "Jack Nicholson");
    cout << a << b;
    cout << "Dumping to file...: " << endl;
    ofstream o;
    if(!(o.is_open()))
    {
        o.open("list.dat",ios::out);
        if(o.bad())
        {
            cerr<<"Cannot open file!"<<endl;
            exit(1);
        }
    }
    o<<a<<b;
    return 0;
}
