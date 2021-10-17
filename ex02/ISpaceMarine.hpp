/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** ISpaceMarine
*/

#pragma once

class ISpaceMarine
{
    public:
        ISpaceMarine() = default;
        virtual ~ISpaceMarine() = default;

        virtual ISpaceMarine *clone() const = 0;
        virtual void battleCry() const = 0;
        virtual void meleeAttack() const = 0;
        virtual void rangedAttack() const = 0;
};
