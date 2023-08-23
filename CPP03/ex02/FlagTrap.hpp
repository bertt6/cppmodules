#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ScavTrap.hpp"

class FlagTrap : public ClapTrap {
        FlagTrap();
        ~FlagTrap();
        FlagTrap(string);
        FlagTrap(const FlagTrap &);
        FlagTrap &operator = (const FlagTrap &);

        void highFivesGuys(void);
};


#endif