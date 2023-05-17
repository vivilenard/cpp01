#ifndef HUMAM_A

# define HUMAN_A

#include <iostream>

class HumanA
{
    private:
        std::string Weapon;
        std::string _name;

    public:
        void attack ( void );
        HumanA(std::string name, std::string& WeaponREF);
};

# endif