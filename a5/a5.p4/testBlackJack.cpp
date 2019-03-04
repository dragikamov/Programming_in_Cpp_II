/*
CH08-320143
a5 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "Card.h"
#include "Deck.h"
#include "Game.h"
#include "GenericPlayer.h"
#include "Hand.h"
#include "House.h"
#include "Player.h"

using namespace std;

int main()
{
    cout<<"\t\tWelcome to Blackjack!\n\n";

    int numPlayers=0;
    while(numPlayers<1 || numPlayers>7)
    {
        cout<<"How many players? (1 - 7): ";
        cin>>numPlayers;
    }

    vector<string>names;
    string name;
    for (int i=0;i<numPlayers;++i)
    {
        cout<<"Enter player name: ";
        cin>>name;
        names.push_back(name);
    }
    cout<<endl;

    char again='y';
    while(again!='n' && again!='N')
    {
        // I put the following line in this loop
        // because it was creating an error when
        // players would continue playing for a
        // couple of times (we'd use all of the cards)
        Game aGame(names);
        aGame.Play();
        cout<<"\nDo you want to play again? (Y/N): ";
        cin>>again;
    }
    return 0;
}
