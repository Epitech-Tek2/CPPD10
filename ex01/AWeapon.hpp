/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** AWeapon
*/

#pragma once

#include <string>

#define cOut(message) std::cout << message << std::endl

class AWeapon
{
    public:
        AWeapon(std::string const& name, const int apcost, int damage) noexcept;
        virtual ~AWeapon() = default;

        std::string const& getName() const noexcept;
        int getAPCost() const noexcept;
        int getDamage() const noexcept;

        virtual void attack() const = 0;

    protected:
        int _apCost;
        int _damage;
        std::string _name;
    private:
};