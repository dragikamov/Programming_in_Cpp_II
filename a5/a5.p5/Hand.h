/*
CH08-320143
a5 p5.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef HAND_H
#define HAND_H
#include <bits/stdc++.h>
#include "Card.h"

class Hand
{
public:
    Hand();
    virtual ~Hand();
    void Add(Card* pCard);
    void Clear();
    int GetTotal() const;
protected:
    std::vector<Card*> m_Cards;
};

#endif // HAND_H
