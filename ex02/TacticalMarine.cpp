/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** TacticalMarine
*/

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() noexcept
{
    cOut("Tactical Marine ready for battle");
}

TacticalMarine::TacticalMarine(TacticalMarine const& marine __attribute__((unused))) noexcept
{
    cOut("Tactical Marine ready for battle");
}

TacticalMarine::~TacticalMarine()
{
    cOut("Aaargh...");
}

ISpaceMarine *TacticalMarine::clone() const noexcept
{
    return (new TacticalMarine(*this));
}

void TacticalMarine::battleCry() const noexcept
{
    cOut("For the holy PLOT!");
}

void TacticalMarine::rangedAttack() const noexcept
{
    cOut("* attacks with bolter *");
}

void TacticalMarine::meleeAttack() const noexcept
{
    cOut("* attacks with chainsword *");
}