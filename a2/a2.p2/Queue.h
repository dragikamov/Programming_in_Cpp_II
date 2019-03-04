/*
CH08-320143
a2 p2.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
using namespace std;

template<class T>
class Queue
{
private:
    int n,currN;
    T *q;
public:
    Queue()
    {
        n=10;
        this->currN=0;
        q=new T[10];
    }
    Queue(const Queue &a)
    {
        this->n=a.n;
        this->currN=a.currN;
        for(int i=0;i<this->currN;i++)
        {
            this->q[i]=a.q[i];
        }
    }
    Queue(int size)
    {
        n=size;
        this->currN=0;
        q=new T[n];
    }
    bool push(T element)
    {
        if(this->currN<n)
        {
            q[this->currN]=element;
            this->currN+=1;
            return true;
        }
        return false;
    }
    bool pop(T &out)
    {
        if(this->currN==0)
        {
            return false;
        }
        out=q[0];
        for(int i=1;i<this->currN;i++)
        {
            q[i-1]=q[i];
        }
        this->currN-=1;
        return true;
    }
    T back(void)
    {
        return q[0];
    }
    T front(void)
    {
        return q[this->currN-1];
    }
    int getNumEntries()
    {
        return this->currN;
    }
    void extend(int k)
    {
        T *temp=new T[n];
        for(int i=0;i<currN;i++)
        {
            temp[i]=q[i];
        }
        delete [] q;
        q=new T[n+k];
        for(int i=0;i<currN;i++)
        {
            q[i]=temp[i];
        }
        n+=k;
        delete [] temp;
    }

    ~Queue()
    {
        delete [] q;
    }
};
