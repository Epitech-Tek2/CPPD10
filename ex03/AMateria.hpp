/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** AMateria
*/

#pragma once

#include <iostream>

class AMateria;

#include "ICharacter.hpp"

class AMateria {
    public:
        AMateria(std::string const& type) noexcept;
        virtual ~AMateria() = default;

        std::string const& getType() const noexcept;
        unsigned int getXP() const noexcept;

        virtual AMateria *clone() const = 0;
        virtual void effect(ICharacter& target) = delete;
        virtual void use(ICharacter& target) noexcept;

    protected:
        unsigned int _xp;
        std::string _type;
    private:
};