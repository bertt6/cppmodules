#include "Zombie.hpp"


void Zombie::setName(std::string name) {
    this->name = name;
}

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name << " destroyed!!" << std::endl;
}

Zombie::Zombie() {
    std::cout << "Zombie Created!!" << std::endl;
}