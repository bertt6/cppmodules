#include "phonebook.hpp"

int main(int ac, char **av) {
    (void) ac;
    (void) av;
    Phonebook phonebook;
    std::string input;
    while (true) {
        std::cout << "Lütfen bir değer giriniz" << std::endl;
        std::cin >> input;
        if (input == "ADD") {
            phonebook.addContact();
        }
        else if (input == "SEARCH") {
            phonebook.search();
        }
        else if (input == "EXIT") {
            system("clear");
            exit(1);
        } else {
            system("clear");
            std::cout << "Lütfen geçerli bir değer giriniz" << std::endl;
        }

    }
}