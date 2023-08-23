#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
private:
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &cpy);
    FragTrap& operator=(const FragTrap &assign);
    ~FragTrap();
    void    highFiveGuys(void);
};

#endif