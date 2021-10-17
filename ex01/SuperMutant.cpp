/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** SuperMutant
*/

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() noexcept :
    AEnemy(170, "Super Mutant")
{
    cOut("Gaaah. Me want smash heads!");
}

SuperMutant::~SuperMutant()
{
    cOut("Aaargh...");
}

void SuperMutant::takeDamage(const int damage)
{
    AEnemy::takeDamage(damage - 3);
}