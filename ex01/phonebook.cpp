#include "phonebook.hpp"
void Phonebook::addContact() {
    std::cout << "Please enter name : ";
    std::cin >> this->contact[index].name;
    std::cout << "Please enter surname : ";
    std::cin >> this->contact[index].surname;
    std::cout << "Please enter nickname : ";
    std::cin >> this->contact[index].nickName;
    std::cout << "Please enter phone number : ";
    std::cin >> this->contact[index].phoneNumber;
    std::cout << "Please enter darkest secret : ";
    std::cin >> this->contact[index].darkSecret;
    std::cout << "Contact Added!!" << std::endl;
    index++;
}
void Phonebook::search() {
    std::cout << std::right << std::setw(10) << "index" << "|";
    std::cout << std::right << std::setw(10) << "name" << "|";
    std::cout << std::right << std::setw(10) << "surname" << "|";
    std::cout << std::right << std::setw(10) << "nickname" << "|" << std::endl;
    int indeex = 0;
    while(indeex < this->index)
    {
        std::cout << std::right << std::setw(10) << indeex << "|";
        std::cout << std::right << std::setw(10) << this->contact[indeex].name << "|";
        std::cout << std::right << std::setw(10) << this->contact[indeex].surname << "|";
        std::cout << std::right << std::setw(10) << this->contact[indeex].nickName << "|" << std::endl;
        this->contact[indeex].index = indeex;
        indeex++;
    }
    std::cout << "Please select index : ";
    int selectIndex = 0;
    std::cin >> selectIndex;
    std::cout << "Name : " << this->contact[selectIndex].name << std::endl;
    std::cout << "Surname : " << this->contact[selectIndex].surname << std::endl;
    std::cout << "Nickname : " << this->contact[selectIndex].nickName << std::endl;
    std::cout << "Phone Number : " << this->contact[selectIndex].phoneNumber << std::endl;
    std::cout << "Darkest secret : " << this->contact[selectIndex].darkSecret << std::endl;
}

void Phonebook::showContacts() {

}
