#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *a = new Zombie(name);
    return a;
}

