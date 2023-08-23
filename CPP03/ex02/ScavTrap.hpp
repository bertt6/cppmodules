#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
private:

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &cpy);
    ScavTrap& operator=(const ScavTrap &assign);
    void	attack(const std::string& name);
    void    guardGate(void);
    ~ScavTrap();
};

#endif