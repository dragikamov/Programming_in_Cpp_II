/*
CH08-320143
a5 p6.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef DECK_H
#define DECK_H
#include <bits/stdc++.h>
#include "Hand.h"
#include "GenericPlayer.h"

class Deck : public Hand
{
public:
    Deck();
    virtual ~Deck();
    void Populate();
    void Shuffle();
    void Deal(Hand& aHand);
    void AdditionalCards(GenericPlayer& aGenericPlayer);
};

#endif // DECK_H
