/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** Ice
*/

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

#define cOut(message) std::cout << message << std::endl

class Ice : public AMateria {
    public:
        Ice() noexcept;
        Ice(Ice const& ice) noexcept;
        ~Ice() = default;

        virtual AMateria *clone() const noexcept;
        virtual void effect(ICharacter& target) const noexcept;

    protected:
    private:
};