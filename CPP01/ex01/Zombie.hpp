#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        void announce(void);
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif