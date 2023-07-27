#include "Fixed.hpp"

Fixed::Fixed() {
    cout << "Default consturctor called" << endl;
}

Fixed::Fixed(const Fixed &cpy) {
    cout << "Copy constructor called" << endl;
    *this = cpy;
}

Fixed& Fixed::operator = (const Fixed &assing) {
    cout << "Copy assingment operator called" << endl;
    this->_fixed_point = assing._fixed_point;
    return *this;
}

Fixed::~Fixed() {
    cout << "Destructor called" << endl;
}

int Fixed::getRawBits(void) const {
    cout << "getRawBits member function called" << endl;
    return this->_fixed_point;
}

void Fixed::setRawBits(int const raw) {
    this->_fixed_point = raw;
}

float Fixed::toFloat(void) const {
    return roundf((float)(_fixed_point) /(1 << _fraction_number));
}

int Fixed::toInt( void ) const {
    return (int)this->_fixed_point >> _fraction_number;
}




