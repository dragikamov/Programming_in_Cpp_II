/*
CH08-320143
a5 p4.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef HOUSE_H
#define HOUSE_H
#include <bits/stdc++.h>
#include "GenericPlayer.h"

class House : public GenericPlayer
{
public:
    House(const std::string& name="House");
    virtual ~House();
    virtual bool IsHitting() const;
    void FlipFirstCard();

    // I added these three methods because
    // we weren't printing anything for the
    // house
    void Win() const;
    void Lose() const;
    void Push() const;
};

#endif // HOUSE_H
