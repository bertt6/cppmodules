#include "Animal.hpp"

Animal::Animal() {
    cout << "Animal constructor called" << endl;
    this->type = "Empty";
}

Animal::Animal(const Animal &cpy) {
    *this = cpy;
}

Animal::~Animal() {
    cout << "Animal destructor called" << endl;
}

Animal &Animal::operator=(const Animal &assing) {
    this->type = assing.type;
    return *this;
}


void Animal::makeSound() const {
    cout << "Sound?" << endl;
}

std::string Animal::getType() const{
    return this->type;
}



