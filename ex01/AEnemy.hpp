/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** AEnemy
*/

#pragma once

#include <string>

#define cOut(message) std::cout << message << std::endl

class AEnemy
{
    public:
        AEnemy(int hp, std::string const& type) noexcept;
        virtual ~AEnemy() = default;

        std::string const& getType() const noexcept;
        int getHP() const noexcept;

        virtual void takeDamage(int damaga);

    protected:
        int _hp;
        std::string _type;
};