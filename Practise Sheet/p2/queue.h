/*
CH08-320143
p2.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>

template<class T>
class QueueItem
{
public:
    T value;
    QueueItem *next = NULL;
    QueueItem *prev = NULL;
    QueueItem(){}
};

template<class T>
class Queue
{
private:
    QueueItem<T> *front;
    QueueItem<T> *back;
public:
    Queue(){}
    ~Queue()
    {
        while(!this->is_empty())
        {
            this->remove(0);
        }
    }
    T remove(int pos)
    {
        QueueItem<T> *cursor;
        cursor=this->front;
        while(pos>0 && cursor->next!=NULL)
        {
            cursor=cursor->next;
        }
        QueueItem<T> *previ=cursor->prev;
        QueueItem<T> *nexti=cursor->next;
        previ->next=nexti;
        nexti->prev=previ;
        if(cursor==this->back)
        {
            back=previ;
        }
        if(cursor==this->front)
        {
            front=nexti;
        }
        T temp = cursor->value;
        delete cursor;
        return temp;
    }
    void add (const T &n)
    {
        QueueItem<T> *temp;
        temp = new QueueItem<T>;
        temp->value=n;
        if(this->is_empty())
        {
            this->front=temp;
            this->back=temp;
        }
        else
        {
            this->back->next=temp;
            temp->prev=this->back;
            this->back=temp;
        }
    }
    bool is_empty() const
    {
        return front == NULL;
    }
    void print()
    {
        QueueItem<T> *cursor = this->front;
        while(cursor->next!=NULL)
        {
            std::cout<<cursor->value<<" ";
        }
        std::cout<<std::endl;
    }
};
