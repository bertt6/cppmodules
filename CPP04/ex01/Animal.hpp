#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <cstring>

using std::endl;
using std::cout;

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &);
        virtual ~Animal();
        Animal &operator=(const Animal &);

        virtual void makeSound() const;
        std::string getType() const;

};



#endif
