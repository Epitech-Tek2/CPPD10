/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** AssaultTerminator
*/

#pragma once

#include <iostream>
#include "ISpaceMarine.hpp"

#define cOut(message) std::cout << message << std::endl

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator() noexcept;
        AssaultTerminator(AssaultTerminator const& marine) noexcept;
        virtual ~AssaultTerminator();

        virtual ISpaceMarine *clone() const noexcept;
        virtual void battleCry() const noexcept;
        virtual void meleeAttack() const noexcept;
        virtual void rangedAttack() const noexcept;
};