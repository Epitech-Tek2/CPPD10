/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** Peon
*/

#include "Peon.hpp"

Peon::Peon(std::string name) noexcept : Victim(name)
{
    cOut("Zog zog.");
}

Peon::~Peon() noexcept
{
    cOut("Bleuark...");
}

void Peon::getPolymorphed() const noexcept
{
    cOut(getName() << " has been turned into a pink pony!");
}