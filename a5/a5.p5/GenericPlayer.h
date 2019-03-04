/*
CH08-320143
a5 p5.cpp
Dragi Kamov
d.kamov@jacobs-university.de
*/

#ifndef GENERIC_H
#define GENERIC_H
#include <bits/stdc++.h>
#include "Hand.h"

class GenericPlayer : public Hand
{
    friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);

public:
    GenericPlayer(const std::string& name = "");
    virtual ~GenericPlayer();
    virtual bool IsHitting() const = 0;
    bool IsBusted() const;
    void Bust() const;

protected:
    std::string m_Name;
};

#endif // GENERIC_H
