#include "Fixed.hpp"

int Fixed::getRawBits( void ) const {
    return this->_fixed_num;
}

int Fixed::toInt(void) const {
    return this->_fixed_num >> this->_fractional_num;
}
float Fixed::toFloat(void) const {
    return (float)this->_fixed_num / (1 << this->_fractional_num);
}

Fixed::Fixed(const int num) {
    this->_fixed_num = num << _fractional_num;
}

Fixed::Fixed() {
    this->_fixed_num = 0;
}

Fixed::Fixed(const float value)
{
    this->_fixed_num = int(roundf(value * (1 << _fractional_num)));
}

Fixed::Fixed(const Fixed &cpy) {
    *this = cpy;
}


Fixed& Fixed::operator = (Fixed const &assing) {
    this->_fixed_num = assing.getRawBits();
    return *this;
}

Fixed::~Fixed() {
}

void Fixed::setRawBits(int const raw) {
    this->_fixed_num = raw;
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed) {
    output << (float)fixed.toFloat();
    return output;
}

Fixed &Fixed::operator++()
{
    this->_fixed_num++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->_fixed_num++;
    return temp;
}

Fixed &Fixed::operator -- (){
    this->_fixed_num--;
    return *this;
}

Fixed Fixed::operator -- (int) {
    Fixed temp = *this;
    this->_fixed_num--;
    return temp;
}

float Fixed::operator + (const Fixed &fixed) {
    return this->toFloat() + fixed.toFloat();
}

float Fixed::operator - (const Fixed &fixed) {
    return this->toFloat() - fixed.toFloat();
}

float Fixed::operator * (const Fixed &fixed) {
    return this->toFloat() * fixed.toFloat();
}

float Fixed::operator / (const Fixed &fixed) {
    return this->toFloat() / fixed.toFloat();
}


bool Fixed::operator > (const Fixed &fixed) {
    if (this->getRawBits() > fixed.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator < (const Fixed &fixed) {
    if (this->getRawBits() < fixed.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator >= (const Fixed &fixed) {
    if (this->getRawBits() >= fixed.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator <= (const Fixed &fixed) {
    if (this->getRawBits() <= fixed.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator == (const Fixed &fixed) {
    if (this->getRawBits() == fixed.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator != (const Fixed &fixed) {
    if (this->getRawBits() != fixed.getRawBits())
        return true;
    else
        return false;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2) {
    return (fixed1.getRawBits() < fixed2.getRawBits()) ? fixed1 : fixed2;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2) {
    return (fixed1.getRawBits() > fixed2.getRawBits()) ? fixed1 :fixed2;
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2) {
    return (fixed1.getRawBits() < fixed2.getRawBits()) ? fixed1 : fixed2;
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2) {
    return (fixed1.getRawBits() > fixed2.getRawBits()) ? fixed1 : fixed2;
}
