#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap {
    protected:
        string _name;
        int _healthPoint;
        int _energyPoint;
        int _attackDamage;

    public:
        ClapTrap();
        ClapTrap(string);
        ~ClapTrap();
        ClapTrap(const ClapTrap &);
        ClapTrap &operator=(const ClapTrap &);
        virtual void attack(const string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        string getName(void);
        int getHealthPoint(void);
        int getEnergyPoint(void);
        int getAttackDamage(void);
        void setName(string);
        void setHealthPoint(int);
        void setEnergyPoint(int);
        void setAttackDamage(int);
};

#endif