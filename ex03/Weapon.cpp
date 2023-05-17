#include "Weapon.hpp"

std::string Weapon::setType(std::string str) {_type = str;}

std::string Weapon::getType() const
{
    std::string const& typeREF = _type;

    return (typeREF);
}

