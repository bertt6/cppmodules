#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <cstring>
#include "AAnimal.hpp"
#include "Brain.hpp"

using std::endl;
using std::cout;

class Cat : public AAnimal{
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
