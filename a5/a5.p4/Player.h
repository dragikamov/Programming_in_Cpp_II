/*
CH08-320143
a5 p4.h
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef PLAYER_H
#define PLAYER_H
#include <bits/stdc++.h>
#include "GenericPlayer.h"

class Player : public GenericPlayer
{
public:
    Player(const std::string& name = "");
    virtual ~Player();
    virtual bool IsHitting() const;
    void Win() const;
    void Lose() const;
    void Push() const;
};

#endif // PLAYER_H
