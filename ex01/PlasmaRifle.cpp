/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** PlasmaRifle
*/

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() noexcept :
    AWeapon("Plasma Rifle", 5, 21) {}

void PlasmaRifle::attack() const noexcept
{
    cOut("* piouuu piouuu piouuu *");
}