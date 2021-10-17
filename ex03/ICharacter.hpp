/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** ICharacter
*/

#pragma once

class ICharacter;

#include <iostream>
#include "AMateria.hpp"

class ICharacter {
    public:
        ICharacter() = default;
        virtual ~ICharacter() = default;

        virtual std::string const& getName() const = 0;
        virtual void equip(AMateria *materia) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};