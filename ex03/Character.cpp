/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(std::string const& name) noexcept :
    _name(name)
{
    for (int i = 0; i < 4; i++) _slots[i] = nullptr;
}

Character::Character(Character const& character) noexcept :
    _name(character._name)
{
    for (int i = 0; i < 4; i++) {
        if (_slots[i]) delete _slots[i];
        _slots[i] = nullptr;
        if (character._slots[i]) _slots[i] = character._slots[i]->clone();
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (_slots[i]) delete _slots[i];
}

std::string const& Character::getName() const noexcept
{
    return (_name);
}

void Character::equip(AMateria *materia) noexcept
{
    if (!materia) return;
    for (int i = 0; i < 4; i++)
        if (!_slots[i]) {
            _slots[i] = materia;
            return;
        }
}

void Character::unequip(int idx) noexcept
{
    if (idx >= 0 && idx < 4) _slots[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target) noexcept
{
    if (idx >= 0 && idx < 4 && _slots[idx]) _slots[idx]->use(target);
}