/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** Character
*/

#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
    public:
        Character(std::string const& name) noexcept;
        Character(Character const& character) noexcept;
        ~Character();

        virtual std::string const& getName() const noexcept;
        virtual void equip(AMateria *materia) noexcept;
        virtual void unequip(int idx) noexcept;
        virtual void use(int idx, ICharacter& target) noexcept;

    protected:
        AMateria *_slots[4];
        std::string _name;
    private:
};