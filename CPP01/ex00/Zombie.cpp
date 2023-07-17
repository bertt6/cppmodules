#include "Zombie.hpp"

std::string Zombie::getName(void)
{
    return this->Name;
}

void Zombie::setName(std::string name)
{
    this->Name = name;
}

void Zombie::announce(void) {
    std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
    std::cout << this->Name;
    std::cout << ": destroyed!" << std::endl; 
}


Zombie::Zombie(std::string name)
{
    this->Name = name;
    announce();
}
