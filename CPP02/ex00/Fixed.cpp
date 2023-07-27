#include "Fixed.hpp"

Fixed::Fixed() {
    cout << "Default constructor called" << endl;
    _fixed_num = 0;
}

Fixed::~Fixed() {
    cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &cpy) {
    cout << "Copy constructor called" << endl;
    *this = cpy;
}
        
int Fixed::getRawBits( void ) const {
    cout << "getRawBits member function called" << endl;
    return this->_fixed_num;
}

void Fixed::setRawBits( int const raw ) {
    this->_fixed_num = raw;
}

Fixed& Fixed::operator = (const Fixed &assing) {
    cout << "Copy assignment operator called" << endl;
    this->_fixed_num = assing.getRawBits();
    return *this;
}
