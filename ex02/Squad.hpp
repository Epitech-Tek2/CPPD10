/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** Squad
*/

#pragma once

#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad {
    public:
        Squad() noexcept;
        Squad(Squad const& squad) noexcept;
        virtual ~Squad();

        int getCount() const noexcept;
        ISpaceMarine *getUnit(const int position);
        int push(ISpaceMarine *marine);

        Squad& operator=(Squad const& squad) noexcept;

    protected:
        int _count;
        int _size;
        ISpaceMarine **_array;
        void resize();
};