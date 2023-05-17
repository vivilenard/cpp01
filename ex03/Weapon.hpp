#ifndef WEAPON_HPP

# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string _type;
    public:
        std::string getType() const;
        std::string setType(std::string name);
};


# endif