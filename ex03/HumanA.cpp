#include "HumanA.hpp"

void HumanA::attack ( void )
{
    std::cout << _name << " attacks with their " << Weapon << std::endl;
}

HumanA::HumanA(std::string name, std::string& WeaponREF)
{
    _name = name;
    Weapon = WeaponREF;
}