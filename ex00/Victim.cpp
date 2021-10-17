/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** Victim
*/

#include "Victim.hpp"

Victim::Victim(std::string name) noexcept : _name(name)
{
    cOut("Some random victim called " << _name << " just popped!");
}

Victim::~Victim()
{
    cOut("Victim " << _name << " just died for no apparent reason!");
}

std::string Victim::getName() const noexcept
{
    return _name;
}

void Victim::getPolymorphed() const noexcept
{
    cOut(_name << " has been turned into a cute little sheep!");
}

std::ostream& operator<<(std::ostream& stream, Victim& victim) noexcept
{
    return stream << "I'm " + victim.getName() + " and I like otters!" << std::endl;
}