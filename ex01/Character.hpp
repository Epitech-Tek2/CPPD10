/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** Character
*/

#pragma once

#include <iostream>
#include "AEnemy.hpp"
#include "AWeapon.hpp"

#define cOut(message) std::cout << message << std::endl

class Character
{
    public:
        Character(std::string const& name) noexcept;
        ~Character();

        std::string const& getName() const noexcept;
        int getAP() const noexcept;
        AWeapon *getWeapon() const noexcept;

        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(AEnemy *enemy);
        bool action(int cost);

    protected:
        AWeapon *_weapon;
        int _ap;
        std::string _name;
};

std::ostream& operator<<(std::ostream& stream, Character const& character);