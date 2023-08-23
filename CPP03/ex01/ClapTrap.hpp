#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

using std::cout;
using std::string;
using std::endl;

class ClapTrap {
    protected:
		string	_name;
		int	_hitpoint;
		int	_energy;
		int	_attack;
	public:
		ClapTrap();
        ClapTrap(string name);
        ClapTrap(const ClapTrap &cpy);
        ClapTrap& operator=(const ClapTrap &assign);
		virtual void	attack(const string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
        void    setName(string name);
        string getName(void);
        void    setAttack(int amount);
        int     getAttack(void);
        void    setHitpoint(int amount);
        int     getHitpoint(void);
		virtual ~ClapTrap();
};

#endif