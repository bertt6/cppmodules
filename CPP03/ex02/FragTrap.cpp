# include "FragTrap.hpp"

FragTrap::FragTrap() {
    cout << "FragTrap constructor called" << endl;
    _name = "Undefined";
    _healthPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
} 

FragTrap::FragTrap(string name) {
    cout << "FragTrap constructor called" << endl;
    _name = name;
    _healthPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &cpy) {
    *this = cpy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

FragTrap::~FragTrap() {
    cout << "FragTrap destructor called" << endl;
}

void FragTrap::highFiveGuys() {
    cout << "FragTrap wants to high five you!" << endl;
}