#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <cstring>
#include "Animal.hpp"

using std::endl;
using std::cout;

class Cat : public Animal{
    public:
        Cat();
        Cat(const Cat &);
        ~Cat();
        Cat &operator=(const Cat &);

        void makeSound() const;
};



#endif
