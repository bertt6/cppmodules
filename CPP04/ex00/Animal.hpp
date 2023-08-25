#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Animal{
    protected:
        string type;
    public:
        Animal();
        Animal(const Animal &cpy);
        Animal &operator = (const Animal &assing);
        virtual string getType(void) const;
        virtual void makeSound(void) const;
        virtual ~Animal();;

};

#endif