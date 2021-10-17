/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** RadScorpion
*/

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() noexcept :
    AEnemy(80, "RadScorpion")
{
    cOut("* click click click *");
}

RadScorpion::~RadScorpion()
{
    cOut("* SPROTCH *");
}