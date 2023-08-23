# include "FragTrap.hpp"

FragTrap::FragTrap() {
    _name = "FragTrap";
    _hitpoint = 100;
    _energy = 50;
    _attack = 30;
}

FragTrap::FragTrap(std::string name) {
    _name = name;
    _hitpoint = 100;
    _energy = 50;
    _attack = 30;
}

FragTrap::FragTrap(const FragTrap &cpy) {
    *this = cpy;
}

FragTrap& FragTrap::operator=(const FragTrap &assign) {
    this->_name = assign._name;
    this->_attack = assign._attack;
    this->_energy = assign._energy;
    this->_hitpoint = assign._hitpoint;
    return  *this;
}

void    FragTrap::highFiveGuys() {
    std::cout << this->_name << "is highFiveGuys announce!" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Destructor" << std::endl;
}