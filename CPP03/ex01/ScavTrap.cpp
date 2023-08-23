#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->setName("Undefined");
    this->setHealthPoint(100);
    this->setEnergyPoint(50);
    this->setAttackDamage(20);
    cout << "Default ScavTrap Constructor Called"<< endl;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name){
    this->setName(name);
    this->setHealthPoint(100);
    this->setEnergyPoint(50);
    this->setAttackDamage(20);
    cout << "Default ScavTrap Constructor Called"<< endl;
}

ScavTrap::~ScavTrap() {
    cout << "Scav Trap Destructor Called!" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) {
    *this = cpy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cpy) {
    if(this != &cpy)
        *this = cpy;
    return *this;
}

void ScavTrap::attack(const string &target) {
    if(this->_energyPoint > 0 && this->_healthPoint > 0) {
        cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << endl;
        this->_energyPoint -= 1;
    }
    else
        cout << "ScavTrap " << this->_name << " have no energy or hit points" << endl;

}

void ScavTrap::guardGate(void) {
    cout << "ScavTrap is now in Gate keeper mode" << endl;
}