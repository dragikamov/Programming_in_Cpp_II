/*
CH08-320143
a1 p2.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

using namespace std;

int len(ifstream &in)
{
    in.seekg(0,ios::end);
    int length;
    length=in.tellg();
    in.seekg(0,ios::beg);
    return length;
}

int main()
{
    int n;
    cin>>n;
    string file_names[n];
    for(int i=0;i<n;i++)
    {
        cin>>file_names[i];
    }
    ofstream out;
    if(!(out.is_open()))
    {
        out.open("concatn.txt",ios::out);
        if(out.bad())
        {
            cerr<<"Error opening the output file"<<endl;
        }
    }
    for(int i=0;i<n;i++)
    {
        ifstream in;
        if(!(in.is_open()))
        {
            const char *str = file_names[i].c_str();
            in.open(str,ios::in | ios::binary);
            if(in.bad())
            {
                cerr<<"Error opening "<<file_names[i]<<endl;
            }
        }
        int leng=len(in);
        char buff[leng+1];
        in.read(buff,leng);
        out.write(buff,leng);
        out.write("\n",1);
    }
    return 0;
}
