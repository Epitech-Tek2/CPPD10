/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** AMateria
*/

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) noexcept :
    _xp(0), _type(type) {}

unsigned int AMateria::getXP() const noexcept
{
    return (_xp);
}

std::string const& AMateria::getType() const noexcept
{
    return (_type);
}

void AMateria::use(ICharacter& target __attribute__((unused))) noexcept
{
    _xp += 10;
}