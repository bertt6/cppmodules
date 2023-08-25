#include "dog.hpp"

Dog::Dog() {
    cout << "Dog constructor called!" << endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &cpy) {
    cout << "Copy constructor called!" << endl;
    *this = cpy;
}

Dog &Dog::operator=(const Dog &assing) {
    cout << "Dog copy assing operator called!" << endl;
    this->type = assing.type;
    return *this;
}

Dog::~Dog() {
    cout << "Dog destructor called!" << endl;
}

void Dog::makeSound() const{
    cout << "Woof woof!" << endl;
}

