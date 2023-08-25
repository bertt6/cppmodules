#include "cat.hpp"

Cat::Cat(){
    cout << "Cat constructor called!" << endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &cpy) {
    cout << "Copy constructor called!" << endl;
    *this = cpy;
}

Cat &Cat::operator=(const Cat &assing) {
    cout << "Cat copy assing operator called!" << endl;
    this->type = assing.type;
    return *this;
}

Cat::~Cat() {
    cout << "Cat destructor called!" << endl;
}

void Cat::makeSound() const {
    cout << "Meow" << endl;
}