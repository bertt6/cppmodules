#include "Dog.hpp"

Dog::Dog() {
    cout << "Dog constructor called" << endl;
    this->type = "Dog";
    this->brain = new Brain;
}

Dog::Dog(const Dog &cpy) {
    *this = cpy;
}

Dog::~Dog() {
    cout << "Dog destructor called" << endl;
}

Dog &Dog::operator=(const Dog &assing) {
    this->type = assing.type;
    return *this;
}


void Dog::makeSound() const{
    cout << "Woof woof!" << endl;
}


