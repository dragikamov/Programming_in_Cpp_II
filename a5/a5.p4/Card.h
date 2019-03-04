/*
CH08-320143
a5 p4.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef CARD_H
#define CARD_H
#include <bits/stdc++.h>

class Card
{
public:
    enum rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
               JACK, QUEEN, KING};
    enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};
    friend std::ostream& operator<<(std::ostream& os, const Card& aCard);
    Card(rank r = ACE, suit s = SPADES, bool ifu = true);
    int GetValue() const;
    void Flip();
private:
    rank m_Rank;
    suit m_Suit;
    bool m_IsFaceUp;
};

#endif // CARD_H
