#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &);
        virtual ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &);

        void makeSound() const;
        std::string getType() const;
};

#endif