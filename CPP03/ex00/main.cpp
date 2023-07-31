#include "ClapTrap.hpp"

int main() {
    ClapTrap clapTrap1; // Kullanıcı adı belirtilmeyen bir ClapTrap nesnesi oluşturulur
    ClapTrap clapTrap2("Robot"); // "Robot" adında bir ClapTrap nesnesi oluşturulur

    clapTrap1.attack("Enemy"); // clapTrap1 nesnesi "Enemy" hedefine saldırır
    clapTrap2.attack("Opponent"); // clapTrap2 nesnesi "Opponent" hedefine saldırır

    clapTrap1.takeDamage(5); // clapTrap1 nesnesi 5 hasar alır
    clapTrap2.takeDamage(10); // clapTrap2 nesnesi 10 hasar alır

    clapTrap1.beRepaired(3); // clapTrap1 nesnesi 3 sağlık kazanır
    clapTrap2.beRepaired(7); // clapTrap2 nesnesi 7 sağlık kazanır

    return 0;
}
