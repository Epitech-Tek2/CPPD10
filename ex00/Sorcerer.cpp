/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** Sorcerer
*/

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) noexcept :
    _name(name), _title(title)
{
    cOut(_name << ", " << _title << ", is born!");
}

Sorcerer::~Sorcerer() noexcept
{
    cOut(_name << ", " << _title << ", is dead. Consequences will never be the same!");
}

std::string Sorcerer::getName() const noexcept
{
    return _name;
}

std::string Sorcerer::getTitle() const noexcept
{
    return _title;
}

void Sorcerer::polymorph(Victim const& civil) const noexcept
{
    civil.getPolymorphed();
}

std::ostream& operator<<(std::ostream& stream, Sorcerer& sorcerer)
{
    return stream << "I am " + sorcerer.getName() + ", " + sorcerer.getTitle() +
    ", and I like ponies!" << std::endl;
}