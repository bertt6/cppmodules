#include "WrongCat.hpp"

WrongCat::WrongCat() {
    cout << "WrongCat construstor called" << endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &cpy) {
    *this = cpy;
}

WrongCat::~WrongCat() {
    cout << "WrongCat destructor called" << endl;
}

WrongCat &WrongCat::operator=(const WrongCat &assing) {
    this->type = assing.type;
    return *this;
}

void WrongCat::makeSound() const {
    cout << "WrongCat sound" << endl;
}
