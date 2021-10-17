/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** Ice
*/

#include "Ice.hpp"

Ice::Ice() noexcept :
    AMateria("ice") {}

Ice::Ice(Ice const& ice) noexcept :
    AMateria("ice")
{
    _xp = ice._xp;
}

AMateria *Ice::clone() const noexcept
{
    return (new Ice(*this));
}

void Ice::effect(ICharacter& target) const noexcept
{
    cOut("* shoots an ice bolt at " << target.getName() << " *");
}