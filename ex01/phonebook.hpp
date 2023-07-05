#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"
# include "iomanip"

class Phonebook{
    private:
        Contact contact[8];
        int index;
        int totalIndex;
    public:
        void addContact();
        void search();
        void showContacts();
        Phonebook() {
            this->index = 0;
            this->totalIndex = 0;
        }
};

#endif