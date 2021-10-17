/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** PowerFist
*/

#include "PowerFist.hpp"

PowerFist::PowerFist() noexcept :
    AWeapon("Power Fist", 8, 50) {}

void PowerFist::attack() const noexcept
{
    cOut("* pschhh... SBAM! *");
}