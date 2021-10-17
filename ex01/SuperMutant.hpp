/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** SuperMutant
*/

#pragma once

#include <iostream>
#include "AEnemy.hpp"

class SuperMutant : public AEnemy {
    public:
        SuperMutant() noexcept;
        ~SuperMutant();

        void takeDamage(const int damage);
};