/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** PlasmaRifle
*/

#pragma once

#include <iostream>
#include "AWeapon.hpp"

#define cOut(message) std::cout << message << std::endl

class PlasmaRifle : public AWeapon {
    public:
        PlasmaRifle() noexcept;
        virtual ~PlasmaRifle() = default;

        virtual void attack() const noexcept;
};