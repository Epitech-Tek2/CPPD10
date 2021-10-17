/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** AWeapon
*/

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const& name, const int apcost, int damage) noexcept :
    _apCost(apcost), _damage(damage), _name(name) {}

std::string const& AWeapon::getName() const noexcept
{
    return (_name);
}

int AWeapon::getAPCost() const noexcept
{
    return (_apCost);
}

int AWeapon::getDamage() const noexcept
{
    return (_damage);
}