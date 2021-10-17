/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** MateriaSource
*/

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    public:
        MateriaSource() noexcept;
        virtual ~MateriaSource();

        virtual void learnMateria(AMateria *materia) noexcept;
        virtual AMateria *createMateria(std::string const& type) noexcept;

    protected:
        AMateria *_slots[4];
    private:
};