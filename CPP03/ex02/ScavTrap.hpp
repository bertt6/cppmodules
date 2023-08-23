#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"


using std::cout;
using std::endl;
using std::string;

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(string);
        ScavTrap(const ScavTrap &);
        ScavTrap &operator = (const ScavTrap &);

        void attack(const string& target);
        void guardGate(void);
};

#endif