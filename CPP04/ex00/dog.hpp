#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <cstring>
#include "Animal.hpp"

using std::endl;
using std::cout;

class Dog : public Animal{
    public:
        Dog();
        Dog(const Dog &);
        ~Dog();
        Dog &operator=(const Dog &);

        void makeSound() const;
};



#endif
