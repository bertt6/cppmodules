#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    this->_name = "undefined";
    this->_healthPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    cout << "ScavTrap default constructor called" << endl;
}

ScavTrap::~ScavTrap(void)
{
    cout << "ScavTrap destructor called" << endl;
}

ScavTrap::ScavTrap(string name)
{
    this->_name = name;
    this->_healthPoint = 100;
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
    if (this->_healthPoint > 0 && this->_energyPoint > 0)
    {
        cout << "ScavTrap " << this->_name << " attacks " << target << ", causing ";
        cout << this->_attackDamage << " point of damage!" << endl;
        this->_energyPoint--;
    }
    else
        cout << "ScavTrap " << this->_name << " no health Point or energyPoint!" << endl;
}

void ScavTrap::guardGate(void)
{
    cout << "ScavTrap is now in Gate keeper mode" << endl;
}