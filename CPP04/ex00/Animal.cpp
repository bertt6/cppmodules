#include "Animal.hpp"

Animal::Animal() {
    cout << "Default constructor called!" << endl;
    this->type = "Animal";
}

Animal::Animal(const Animal &cpy){
    cout << "Animal copy constructor called!" << endl;
    *this = cpy;
}

Animal &Animal::operator=(const Animal &assing) {
    cout << "Animal copy assing operator called!" << endl;
    this->type = assing.type;
    return *this;
}

Animal::~Animal() {
    cout << "Animal Destructor Called!" << endl;
}

string Animal::getType(void) const {
    return this->type;
}

void Animal::makeSound(void) const {
    cout << "Animal makesound called!" << endl;
}