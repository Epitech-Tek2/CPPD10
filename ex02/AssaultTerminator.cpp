/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** AssaultTerminator
*/

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() noexcept
{
    cOut("* teleports from space *");
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const& marine __attribute__((unused))) noexcept
{
    cOut("* teleports from space *");
}


AssaultTerminator::~AssaultTerminator()
{
    cOut("I'll be back...");
}

ISpaceMarine *AssaultTerminator::clone() const noexcept
{
    return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const noexcept
{
    cOut("This code is unclean. PURIFY IT!");
}

void AssaultTerminator::meleeAttack() const noexcept
{
    cOut("* attacks with chainfists *");
}

void AssaultTerminator::rangedAttack() const noexcept
{
    cOut("* does nothing *");
}