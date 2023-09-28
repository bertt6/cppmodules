#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

void FragTrap::debug(string name) {
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
    FragTrap a;
    FragTrap b("BERAT");

    a.debug("a");
    b.debug("b");
    b = a;
}