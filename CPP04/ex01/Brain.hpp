#ifndef BRAIN_HPP
# define BRAIN_HPP
 
#include "Cat.hpp"
#include "Dog.hpp"

class Brain {
    private:
        std::string *ideas[100];
    public:
        Brain();
        Brain(const Brain &);
        ~Brain();
        Brain &operator=(const Brain &);
};

#endif