#include "AAnimal.hpp"

AAnimal::AAnimal() {
    cout << "AAnimal constructor called" << endl;
    this->type = "Empty";
}

AAnimal::AAnimal(const AAnimal &cpy) {
    *this = cpy;
}

AAnimal::~AAnimal() {
    cout << "AAnimal destructor called" << endl;
}

AAnimal &AAnimal::operator=(const AAnimal &assing) {
    this->type = assing.type;
    return *this;
}


void AAnimal::makeSound() const {
    cout << "Sound?" << endl;
}

std::string AAnimal::getType() const{
    return this->type;
}



