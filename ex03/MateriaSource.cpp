/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** MateriaSource
*/

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() noexcept
{
    for (int i = 0; i < 4; i++) _slots[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (_slots[i]) delete _slots[i];
}


void MateriaSource::learnMateria(AMateria *materia) noexcept
{
    if (!materia) return;
    for (int i = 0; i < 4; i++)
        if (!_slots[i]) {
            _slots[i] = materia;
            return;
        }
}

AMateria *MateriaSource::createMateria(std::string const& type) noexcept
{
    for (int i = 0; i < 4; i++)
        if (_slots[i] && _slots[i]->getType() == type)
            return (_slots[i]->clone());
    return (nullptr);
}