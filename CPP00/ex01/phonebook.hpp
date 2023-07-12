#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"
# include "iomanip"
# include <limits>
#include <cstdlib>
#include <string>

class Phonebook{
    private:
        Contact contact[8];
        int index;
        int totalIndex;
    public:
        int getTotalIndex();
        void addContact();
        void search();
        void showContacts();
        Phonebook();
};

#endif