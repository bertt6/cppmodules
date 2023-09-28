#include "ScavTrap.hpp"

void ClapTrap::debug(string name) {
    cout << "------------------------------" << endl;
    cout << "------[  DEBUG  ]------" << endl;
    cout << "[VARNAME] : " << name << endl;
    cout << "[NAME   ] : " << _name << endl;
    cout << "[HEALTH ] : " << _healthPoint << endl;
    cout << "[ENERGY ] : " << _energyPoint << endl;
    cout << "[ATTACK ] : " << _attackDamage << endl;
    cout << "------------------------------" << endl;
}

void ScavTrap::debug(string name) {
    cout << "------------------------------" << endl;
    cout << "------[  DEBUG  ]------" << endl;
    cout << "[VARNAME] : " << name << endl;
    cout << "[NAME   ] : " << _name << endl;
    cout << "[HEALTH ] : " << _healthPoint << endl;
    cout << "[ENERGY ] : " << _energyPoint << endl;
    cout << "[ATTACK ] : " << _attackDamage << endl;
    cout << "------------------------------" << endl;
}

int main()
{
    ScavTrap a;
    ScavTrap b("mert");
    b.beRepaired(30);
    a.debug("a");
    b.debug("b");

    a = b;
}