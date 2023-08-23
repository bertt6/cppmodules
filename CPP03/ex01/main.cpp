#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap *a = new ScavTrap("berat");
    ScavTrap test("test");

    a->attack("ömer");
    test.attack("enemy");
    test.takeDamage(30);
    test.guardGate();
}
