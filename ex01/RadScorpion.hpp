/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** RadScorpion
*/

#pragma once

#include <iostream>
#include "AEnemy.hpp"

#define cOut(message) std::cout << message << std::endl

class RadScorpion : public AEnemy {
    public:
        RadScorpion() noexcept;
        ~RadScorpion();
};