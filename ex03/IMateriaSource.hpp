/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** IMateriaSource
*/

#pragma once

#include "AMateria.hpp"

class IMateriaSource {
    public:
        IMateriaSource() = default;
        virtual ~IMateriaSource() = default;

        virtual void learnMateria(AMateria *materia) = 0;
        virtual AMateria *createMateria(std::string const& type) = 0;
};