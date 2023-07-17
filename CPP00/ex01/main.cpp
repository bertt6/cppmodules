#include "phonebook.hpp"

int main(int ac, char **av) {
    (void) ac;
    (void) av;
    Phonebook phonebook;
    std::string input;
    while (true) {
        std::cout << "<<-You can use this commands->>" << std::endl;
        std::cout << ">>ADD<<" << std::endl;
        std::cout << ">>SEARCH<<" << std::endl;
        std::cout << ">>EXIT<<" << std::endl;
        std::cout << ">>Total Contact : " << phonebook.getTotalIndex() << "<<" << std::endl;
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
        }
        else if(!input.length())
            continue;
        else {
            system("clear");
        }
    }
}