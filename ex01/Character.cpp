/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(std::string const& name) noexcept :
    _weapon(nullptr), _ap(40), _name(name) {}

std::string const& Character::getName() const noexcept
{
    return (_name);
}

AWeapon *Character::getWeapon() const noexcept
{
    return (_weapon);
}

bool Character::action(int cost)
{
    if (_ap >= cost) {
        _ap -= cost;
        return (true);
    }
    return (false);
}

void Character::recoverAP() noexcept
{
    _ap += 10;
    _ap = (_ap > 40) ? 40 : _ap;
}

void Character::equip(AWeapon *weapon) noexcept
{
    _weapon = weapon;
}

void Character::attack(AEnemy *enemy) noexcept
{
    if (_weapon == nullptr || enemy == nullptr || !action(_weapon->getAPCost())) return;
    cOut(_name << " attacks " << enemy->getType() << " with a " << _weapon->getName());
    _weapon->attack();
    enemy->takeDamage(_weapon->getDamage());
    if (enemy->getHP() <= 0) {
        delete enemy;
        enemy = nullptr;
    }
}

int Character::getAP() const noexcept
{
    return (_ap);
}

std::ostream& operator<<(std::ostream& stream, Character const& character)
{
    stream << character.getName() << " has " << character.getAP() << " AP and ";
    if (character.getWeapon()) stream << "wields a " << character.getWeapon()->getName();
    else stream << "is unarmed";
    stream << std::endl;
    return (stream);
}