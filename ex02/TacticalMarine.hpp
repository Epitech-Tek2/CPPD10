/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** TacticalMarine
*/

#pragma once

#include <iostream>
#include "ISpaceMarine.hpp"

#define cOut(message) std::cout << message << std::endl

class TacticalMarine : public ISpaceMarine {
    public:
        TacticalMarine() noexcept;
        TacticalMarine(TacticalMarine const& marine) noexcept;
        virtual ~TacticalMarine();

        virtual ISpaceMarine *clone() const noexcept;
        virtual void meleeAttack() const noexcept;
        virtual void rangedAttack() const noexcept;
        virtual void battleCry() const noexcept;
};