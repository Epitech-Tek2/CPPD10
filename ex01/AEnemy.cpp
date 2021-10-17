/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** AEnemy
*/

#include "AEnemy.hpp"

AEnemy::AEnemy(int hp, std::string const& type) noexcept :
    _hp(hp), _type(type) {}

std::string const& AEnemy::getType() const noexcept
{
    return (_type);
}

int AEnemy::getHP() const noexcept
{
    return (_hp);
}

void AEnemy::takeDamage(int damage)
{
    if (damage > 0) _hp -= damage;
}