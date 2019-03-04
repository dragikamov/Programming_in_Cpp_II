/*
CH08-320143
a3 p2.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    vector<string>v;
    while(1)
    {
        getline(cin,str);
        if(str=="STOP")
        {
            break;
        }
        v.push_back(str);
    }
    if(v[1]=="" && v[3]=="")
    {
        cerr<<"The second and the fourth element don't exist"<<endl;
    }
    else if(v[1]=="")
    {
        cerr<<"The second element doesn't exist"<<endl;
    }
    else if(v[3]=="")
    {
        cerr<<"The fourth element doesn't exist"<<endl;
    }
    else
    {
        swap(v[1],v[3]);
    }

    if(v.empty())
    {
        cerr<<"No elements in the vector"<<endl;
    }
    else
    {
        vector<string>::iterator i=v.end();
        i--;
        *i="?";
    }

    int n=v.size();
    for(int i=0; i<n; i++)
    {
        if(i==n-1)
        {
            cout<<v[i]<<endl;
        }
        else
        {
            cout<<v[i]<<";";
        }
    }

    vector<string>::iterator it=v.begin();
    while(it!=v.end())
    {
        if(it==v.end()-1)
        {
            cout<<*it<<endl;
        }
        else
        {
            cout<<*it<<"-";
        }
        it++;
    }
    it--;
    while(it!=v.begin())
    {
        if(it==v.begin()+1)
        {
            cout<<*it<<" "<<*(it-1)<<endl;
        }
        else
        {
            cout<<*it<<" ";
        }
        it--;
    }
    return 0;
}
