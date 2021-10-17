/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** Victim
*/

#pragma once

#include <iostream>
#include <string>
#include <fstream>

#define cOut(message) std::cout << message << std::endl;

class Victim {
    public:
        Victim(std::string name) noexcept;
        ~Victim();

        std::string getName() const noexcept;
        virtual void getPolymorphed() const noexcept;
    protected:
        std::string _name;
};

std::ostream& operator<<(std::ostream& stream, Victim& victim) noexcept;