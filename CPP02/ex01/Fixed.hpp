#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>


using std::string;
using std::cout;
using std::endl;

class Fixed {
    private:
        int _fixed_point;
        static const int _fraction_number = 8;

    public:
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed();
        Fixed(int);
        Fixed(float);
        Fixed(const Fixed &cpy);
        Fixed &operator = (const Fixed &assing);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif