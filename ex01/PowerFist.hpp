/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** PowerFist
*/

#pragma once

#include <iostream>

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist() noexcept;
        virtual ~PowerFist() = default;

        virtual void attack() const noexcept;
};
