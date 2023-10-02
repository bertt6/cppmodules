#include "Cat.hpp"

Cat::Cat() {
    cout << "Cat constructor called" << endl;
    this->type = "Cat";
    this->brain = new Brain;
}

Cat::Cat(const Cat &cpy) {
    *this = cpy;
}

Cat::~Cat() {
    cout << "Cat destructor called" << endl;
}

Cat &Cat::operator=(const Cat &assing) {
    this->type = assing.type;
    return *this;
}


void Cat::makeSound() const {
    cout << "Meow meow!" << endl;
}