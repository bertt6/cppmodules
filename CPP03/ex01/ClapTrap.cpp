#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    cout << "ClapTrap constructor called" << endl;
    this->_name = "Undefined";
    this->_healthPoint = 10;
    this->_energyPoint = 10;
    this->_attackDamage = 0;
}

ClapTrap::~ClapTrap() {
    cout << "ClapTrap destructor called" << endl;
}

ClapTrap::ClapTrap(string name) {
    cout << "Default ClapTrap constructor called" << endl;
    this->_name = name;
    this->_healthPoint = 10;
    this->_energyPoint = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) {
    *this = cpy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

void ClapTrap::attack(const string& target) {
    if(this->_energyPoint > 0 && this->_healthPoint) {
        cout << "ClapTrap " << this->_name << " attacks" << target << ", causing" << this->_attackDamage << "points of damage!" << endl;
        this->_energyPoint -= 1;
    }
    else
        cout << "ClapTrap " << this->_name << " have no energy or hit point!" << endl;
}    

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_energyPoint > 0 && this->_healthPoint) {
        this->_healthPoint -= amount;
        cout << "ClapTrap " << this->_name << " has taken " << amount << " damage" << endl;
    }
    else
        cout << "ClapTrap " << this->_name << " have no energy or hit point!" << endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoint > 0 && this->_healthPoint) {
        this->_energyPoint -= 1;
        cout << "ClapTrap " << this->_name << " earn " << amount << " health!" << endl;
        this->_healthPoint += amount;
    }
    else
        cout << "ClapTrap " << this->_name << " have no energy or hit point!" << endl;
}
