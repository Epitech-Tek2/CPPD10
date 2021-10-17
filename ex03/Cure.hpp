/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** Cure
*/

#pragma once

#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

#define cOut(message) std::cout << message << std::endl

class Cure : public AMateria {
    public:
        Cure() noexcept;
        Cure(Cure const& cure) noexcept;
        virtual ~Cure() = default;

        virtual AMateria *clone() const noexcept;
        virtual void effect(ICharacter& target) const noexcept;

    protected:
    private:
};
