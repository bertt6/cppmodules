#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"
# include "iomanip"

class Phonebook{
    private:
        Contact contact[8];
        int index;
        int helpIndex;
        int totalIndex;
    public:
        void addContact();
        void search();
        void showContacts();
        Phonebook() {
            this->index = 0;
            this->totalIndex = 0;
            this->helpIndex = 0;
        }
};

#endif