/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** ISquad
*/

#pragma once

#include "ISpaceMarine.hpp"

class ISquad
{
    public:
        ISquad() = default;
        virtual ~ISquad() = default;

        virtual int getCount() const = 0;
        virtual int push(ISpaceMarine *value) = 0;
        virtual ISpaceMarine *getUnit(int unit) = 0;
};