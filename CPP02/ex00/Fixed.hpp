#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

using std::cout;
using std::endl;

class Fixed {
    private:
        int _fixed_num;
        static const int _fractional_num = 8;
    public:
        Fixed();
        Fixed(const Fixed &cpy);
        Fixed& operator = (Fixed const &assing);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif