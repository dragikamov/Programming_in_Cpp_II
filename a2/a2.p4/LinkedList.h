/*
CH08-320143
a2 p4.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>

using namespace std;

template<class T>
class list
{
private:
    T info;
    list *next;
    list *prev;
public:
    void getN()
    {
        int n=0;
        list *cursor;
        cursor=this;
        while(cursor->next!=NULL)
        {
            cursor=cursor->next;
            n+=1;
        }
        n+=1;
        cout<<"There are "<<n<<" elements."<<endl;
    }
    list* push_front(T value)
    {
        list *newel=new list;
        if(newel==NULL)
        {
            cout<<"Error allocating memory"<<endl;
            return this;
        }
        newel->info=value;
        newel->next=this;
        newel->prev=NULL;
        this->prev=newel;
        return newel;
    };

    list* push_back(T value)
    {
        list *cursor, *newel, *beg;
        cursor=this;
        beg=this;
        newel=new list;
        if(newel==NULL)
        {
            cout<<"Error allocating memory"<<endl;
            return beg;
        }
        newel->info=value;
        newel->next=NULL;
        if(beg==NULL)
        {
            return newel;
        }
        while(cursor->next!=NULL)
        {
            cursor=cursor->next;
        }
        cursor->next=newel;
        newel->prev=cursor;
        return beg;
    };

    void dispose_list()
    {
        list *cu=this;
        if(cu->next==NULL)
        {
            delete cu;
            return;
        }
        list *curr;
        curr=cu;
        cu=cu->next;
        while(cu!=NULL)
        {
            delete curr;
            curr=cu;
            cu=cu->next;
        }
        delete curr;
    }

    void print_list()
    {
        list *p;
        for(p=this; p; p=p->next)
        {
            cout<<p->info<<endl;
        }
    }

    list *pop()
    {
        list *beg;
        beg=this;
        if(beg!=NULL)
        {
            list *po=beg->next;
            delete beg;
            return po;
        }
        return beg;
    };

};
