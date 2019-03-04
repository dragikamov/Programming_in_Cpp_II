/*
CH08-320143
a5 p5.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef GAME_H
#define GAME_H
#include <bits/stdc++.h>
#include "Deck.h"
#include "House.h"
#include "Player.h"

class Game
{
public:
    Game(const std::vector<std::string>& names);
    ~Game();
    void Play();
private:
    Deck m_Deck;
    House m_House;
    std::vector<Player>m_Players;
};

#endif // GAME_H
