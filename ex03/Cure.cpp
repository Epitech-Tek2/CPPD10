/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** Cure
*/

#include "Cure.hpp"

Cure::Cure() noexcept :
    AMateria("cure") {}

Cure::Cure(Cure const& cure) noexcept :
    AMateria("cure")
{
    _xp = cure._xp;
}

AMateria *Cure::clone() const noexcept
{
    return (new Cure(*this));
}

void Cure::effect(ICharacter& target) const noexcept
{
    cOut("* heals " << target.getName() << "'s wounds *");
}