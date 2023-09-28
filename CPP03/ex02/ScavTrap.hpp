#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    private:

    public:
        ScavTrap();
        ScavTrap(string);
        ScavTrap(const ScavTrap &);
        ~ScavTrap();
        ScavTrap &operator=(const ScavTrap &);

        void attack(const string &target);
        void guardGate(void);

        void debug(string);
};

#endif