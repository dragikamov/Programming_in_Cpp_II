/*
CH08-320143
a2 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    list <int> *my_list;
    my_list=NULL;
    while(1)
    {
        char c;
        int n;
        cin>>c;
        switch(c)
        {
        case 'a':
            cin>>n;
            my_list=my_list->push_back(n);
            break;
        case 'b':
            cin>>n;
            my_list=my_list->push_front(n);
            break;
        case 'p':
            my_list->print_list();
            break;
        case 'q':
            my_list->dispose_list();
            return 0;
        case 'r':
            my_list=my_list->pop();
            break;
        case 'g':
            my_list->getN();
            break;
        default:
            cout<<"Invalid input"<<endl;
            break;
        }
    }
    return 0;
}
