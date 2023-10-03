#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <cstring>
#include "Animal.hpp"
#include "Brain.hpp"

using std::endl;
using std::cout;

class Cat : public Animal{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &);
        ~Cat();
        Cat &operator=(const Cat &);

        void makeSound() const;
};



#endif
