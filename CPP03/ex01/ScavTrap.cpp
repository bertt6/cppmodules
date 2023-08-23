#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    _name = "ScavTrap";
    _hitpoint = 100;
    _energy = 50;
    _attack = 20;
}

ScavTrap::ScavTrap(std::string name) {
    _name = name;
    _hitpoint = 100;
    _energy = 50;
    _attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) {
    *this = cpy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign) {
    this->_name = assign._name;
    this->_hitpoint = assign._hitpoint;
    this->_energy = assign._energy;
    this->_attack = assign._attack;
    return  *this;
}

void    ScavTrap::attack(const std::string& name) {
    if (_hitpoint <= 0)
        std::cout << _name << " is dead!" << std::endl;
    else
        std::cout << "ScavTrap " << this->_name << " attacks " << name << ", causing " << this->_attack << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate() {
    if (this->_hitpoint <= 0)
        std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
    else
        std::cout << "ScavTrap " << this->_name << " guardMod on!" << std::endl;
}

ScavTrap::~ScavTrap() {}