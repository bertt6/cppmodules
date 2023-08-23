#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "ClapTrap";
    _hitpoint = 10;
    _energy = 10;
    _attack = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hitpoint = 10;
    _energy = 10;
    _attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    *this = cpy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &assign)
{
    this->_attack = assign._attack;
    this->_energy = assign._energy;
    this->_hitpoint = assign._hitpoint;
    this->_name = assign._name;
    return *this;
}

ClapTrap::~ClapTrap() {}

void ClapTrap::attack(const std::string &target)
{
    if (this->_hitpoint <= 0)
        std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoint <= 0)
        std::cout << _name << " is dead!" << std::endl;
    else
    {
        if (this->_energy <= 0)
            std::cout << this->_name << " no energy left!" << std::endl;
        else
        {
            if (amount > (unsigned int)this->_hitpoint)
                amount = this->_hitpoint;
            this->_energy -= 1;
            this->_hitpoint -= amount;
            std::cout << this->_name << " taking damage : " << amount << " new _hitpoint : " << this->_hitpoint << std::endl;
            if (this->_hitpoint <= 0)
                std::cout << this->_name << " is dead!" << std::endl;
        }
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitpoint <= 0)
        std::cout << this->_name << " is dead!" << std::endl;
    else
    {
        if (this->_energy <= 0)
            std::cout << this->_name << " no energy left!" << std::endl;
        else
        {
            this->_energy -= 1;
            this->_hitpoint += amount;
            std::cout << this->_name << " beRepaired new _hitpoint : " << this->_hitpoint << " new _energy : " << this->_energy << std::endl;
        }
    }
}

void ClapTrap::setName(std::string name) { _name = name; }

void ClapTrap::setAttack(int amount)
{
    std::cout << this->_name << " attack : " << this->_attack << std::endl;
    this->_attack = amount;
    std::cout << this->_name << " new attack : " << this->_attack << std::endl;
}

std::string ClapTrap::getName()
{
    return this->_name;
}

int ClapTrap::getAttack() { return (_attack); }

void ClapTrap::setHitpoint(int amount)
{
    std::cout << this->_name << " _hitpoint : " << this->_hitpoint << std::endl;
    this->_hitpoint -= amount;
    if (this->_hitpoint <= 0)
        std::cout << this->_name << " bayıldı! " << std::endl;
    else
        std::cout << this->_name << " new _hitpoint : " << this->_hitpoint << std::endl;
}

int ClapTrap::getHitpoint() { return (_hitpoint); }