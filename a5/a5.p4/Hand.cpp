/*
CH08-320143
a5 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "Hand.h"
#include "Card.h"
using namespace std;

Hand::Hand()
{
    m_Cards.reserve(7);
}

Hand::~Hand()
{
    Clear();
}

void Hand::Add(Card* pCard)
{
    m_Cards.push_back(pCard);
}

void Hand::Clear()
{
    vector<Card*>::iterator iter = m_Cards.begin();
    for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
    {
        delete *iter;
        *iter = 0;
    }
    m_Cards.clear();
}

int Hand::GetTotal() const
{
    int total;
    total = 0;
    if(m_Cards.empty())
    {
        return 0;
    }
    if(m_Cards[0]->GetValue()==0)
    {
        return 0;
    }
    vector<Card*>::const_iterator iter;
    bool containsAce=false;
    for(iter=m_Cards.begin();iter!=m_Cards.end();++iter)
    {
        if((*iter)->GetValue()>10)
        {
            total+=10;
        }
        else
        {
            total+=(*iter)->GetValue();
        }
        if((*iter)->GetValue()==Card::ACE)
        {
            containsAce=true;
        }
    }
    if(containsAce && total<=11)
    {
        total+=10;
    }
    return total;
}
