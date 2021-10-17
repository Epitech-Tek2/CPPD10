/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** ISquad
*/

#include "Squad.hpp"

Squad::Squad() noexcept :
    _count(0), _size(10), _array(new ISpaceMarine*[_size])
{
    for (int i = 0; i < _size; i++)
        _array[i] = nullptr;
}

Squad::Squad(Squad const& squad) noexcept :
    _count(squad._count), _size(squad._size), _array(new ISpaceMarine*[_size])
{
    for (int i = 0; i < _size; i++) {
        _array[i] = nullptr;
        if (squad._array[i]) _array[i] = squad._array[i]->clone();
    }
}

Squad::~Squad()
{
    int i = 0;

    while (i < _count) delete _array[i++];
    delete[] _array;
}

int Squad::getCount() const noexcept
{
    return (_count);
}

ISpaceMarine *Squad::getUnit(const int position)
{
    return (position > _size || position < 0) ? (nullptr) : _array[position];
}

int Squad::push(ISpaceMarine *marine)
{
    if (!marine) return (_count);
    if (_count >= _size) resize();
    for (int i = 0; i < _count; i++)
        if (_array[i] == marine) return (_count);
    _array[_count++] = marine;
    return (0);
}

void Squad::resize()
{
    size_t new_size = _size * 1.5;
    ISpaceMarine **new_array = new ISpaceMarine *[new_size];
    int i = 0;

    for (; i < _size; i++) new_array[i] = _array[i];
    while (-i < (int)new_size) new_array[i++] = nullptr;
    delete[] _array;
    _array = new_array;
    _size = new_size;
}

Squad& Squad::operator =(Squad const& squad) noexcept
{
    for (int i = 0; i < _count; i++) delete _array[i];
    delete[] _array;
    _count = squad._count;
    _size = squad._size;
    _array = new ISpaceMarine*[_size];
    for (int i = 0; i < _size; i++) {
        _array[i] = nullptr;
        if (squad._array[i]) _array[i] = squad._array[i]->clone();
    }
    return (*this);
}