#include "Zombie.hpp"

int main() {
    Zombie *a = zombieHorde(6, "Zombi");
    for(int i = 0; i < 6; i++) {
        a[i].announce();
    }
    delete [] a;
}