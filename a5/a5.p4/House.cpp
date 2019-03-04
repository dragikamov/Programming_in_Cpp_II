/*
CH08-320143
a5 p4.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "House.h"
#include "GenericPlayer.h"
using namespace std;

House::House(const string& name):
    GenericPlayer(name)
{}

House::~House()
{}

bool House::IsHitting() const
{
    return(GetTotal()<=16);
}

void House::FlipFirstCard()
{
    if(!(m_Cards.empty()))
	{
        m_Cards[0]->Flip();
	}
    else
	{
		cout<<"No card to flip!\n";
	}
}

// I added these three methods because
// we weren't printing anything for the
// house
void House::Win() const
{
    cout<<m_Name<<" wins.\n";
}

void House::Lose() const
{
    cout<<m_Name<<" loses.\n";
}

void House::Push() const
{
    cout<<m_Name<<" pushes.\n";
}
