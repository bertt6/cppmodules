
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->_name = "undefined";
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    cout << "ScavTrap default constructor called" << endl;
}

ScavTrap::~ScavTrap(void)
{
    cout << "ScavTrap destructor called" << endl;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
    this->_name = name;
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    cout << "ScavTrap constructor called" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

void ScavTrap::attack(const string &target)
{
    if (this->_hitPoint > 0 && this->_energyPoint > 0)
    {
        cout << "ScavTrap " << this->_name << " attacks " << target << ", causing ";
        cout << this->_attackDamage << " point of damage!" << endl;
    }
    else
        cout << "ScavTrap " << this->_name << " no hitPoint or energyPoint!" << endl;
}

void ScavTrap::guardGate(void)
{
    cout << "ScavTrap is now in Gate keeper mode" << endl;
}