/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD10-clement.muth
** File description:
** Sorcerer
*/

#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "Victim.hpp"

class Sorcerer {
    public:
        Sorcerer(std::string name, std::string title) noexcept;
        ~Sorcerer();

        std::string getName() const noexcept;
        std::string getTitle() const noexcept;
        void polymorph(Victim const& civil) const noexcept;

    protected:
        std::string _name;
        std::string _title;
    private:
};

std::ostream& operator<<(std::ostream& stream, Sorcerer& sorcerer);