#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    cout << "WrongAnimal construstor called" << endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) {
    *this = cpy;
}

WrongAnimal::~WrongAnimal() {
    cout << "WrongAnimal destructor called" << endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assing) {
    this->type = assing.type;
    return *this;
}

void WrongAnimal::makeSound() const{
    cout << "WrongAnimal sound" << endl;
}

std::string WrongAnimal::getType() const {
    return this->type;
}

