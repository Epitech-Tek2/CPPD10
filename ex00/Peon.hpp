/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** Peon
*/

#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "Victim.hpp"

class Peon : public Victim {
    public:
        Peon(std::string) noexcept;
        ~Peon();

        void getPolymorphed() const noexcept;
};