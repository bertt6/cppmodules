#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <cstring>
#include "AAnimal.hpp"
#include "Brain.hpp"

using std::endl;
using std::cout;

class Dog : public AAnimal{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &);
        ~Dog();
        Dog &operator=(const Dog &);

        void makeSound() const;
};



#endif
