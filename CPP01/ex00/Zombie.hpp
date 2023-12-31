#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string.h>

class Zombie {
    private:
        std::string Name;
    public:
        void announce(void);
        Zombie(std::string name);
        ~Zombie();
        std::string getName(void);
        void setName(std::string name);
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
