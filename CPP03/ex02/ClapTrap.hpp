#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap {
    protected:
        string _name;
        int _hitPoint;
        int _energyPoint;
        int _attackDamage;
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(string);
        ClapTrap(const ClapTrap &);
        ClapTrap &operator = (const ClapTrap &);

        int getHealthPoint(void);
        int getEnergyPoint(void);
        int getAttackDamage(void);
        void setName(string);
        void setHealthPoint(int);
        void setEnergyPoint(int);
        void setAttackDamage(int);
};

#endif