#include "phonebook.hpp"

bool isAlphabetic(const std::string &str) {
    for (std::size_t i = 0; i < str.length(); i++) {
        if (!std::isalpha(str[i])) {
            return false;
        }
    }
    return true;
}

bool isNumeric(const std::string& str) {
    for (std::size_t i = 0; i < str.length(); i++) {
        if (!std::isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

Phonebook::Phonebook() {
    this->index = 0;
    this->totalIndex = 0;
    std::cout << "Welcome PhoneBook!" << std::endl;
}

void Phonebook::addContact() {
    std::cout << "Please enter name : ";
    std::getline(std::cin, this->contact[index % 8].name);
    while(!isAlphabetic(this->contact[index % 8].name) || this->contact[index % 8].name.length() < 1)
    {
        std::cout << "Please enter name: ";
        std::getline(std::cin, this->contact[index % 8].name);
    }
    std::cout << "Please enter surname : ";
    std::getline(std::cin, this->contact[index % 8].surname);
    while(!isAlphabetic(this->contact[index % 8].name) || this->contact[index % 8].surname.length() < 1)
    {
        std::cout << "Please enter surname : ";
        std::getline(std::cin, this->contact[index % 8].surname);
    }
    std::cout << "Please enter nickname : ";
    std::getline(std::cin, this->contact[index % 8].nickName);
    while(this->contact[index % 8].nickName.length() < 1)
    {
        std::cout << "Please enter nickname : ";
        std::getline(std::cin, this->contact[index % 8].nickName);
    }
    std::cout << "Please enter phone number : ";
    std::getline(std::cin, this->contact[index % 8].phoneNumber);
    while(!isNumeric(this->contact[index % 8].phoneNumber) || this->contact[index % 8].phoneNumber.length() < 1)
    {
        std::cout << "Please enter phone number : ";
        std::getline(std::cin, this->contact[index % 8].phoneNumber);
    }
    std::cout << "Please enter darkest secret : ";
    std::getline(std::cin, this->contact[index % 8].darkSecret);
    while(this->contact[index % 8].darkSecret.length() < 1)
    {
        std::cout << "Please enter darkest secret : ";
        std::getline(std::cin, this->contact[index % 8].darkSecret);
    }
    system("clear");
    std::cout << "Contact Added!!" << std::endl;
    this->totalIndex++;
    index++;
}

void Phonebook::search() {
    std::cout << std::right << std::setw(10) << "index" << "|";
    std::cout << std::right << std::setw(10) << "name" << "|";
    std::cout << std::right << std::setw(10) << "surname" << "|";
    std::cout << std::right << std::setw(10) << "nickname" << "|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    int indeex = 0;
    if(this->index >= 8)
        indeex = 8;
    for(int i = 0; i < this->totalIndex; i++)
    {
        if(this->totalIndex >= 8)
            this->totalIndex = 8;
        std::cout << std::right << std::setw(10) << i << "|";
        if(this->contact[i % 8].name.length() > 9)
            std::cout << std::right << std::setw(9) << this->contact[i % 8].name.substr(0, 9) << "." << "|";
        else
            std::cout << std::right << std::setw(10) << this->contact[i % 8].name << "|";
        if(this->contact[i % 8].surname.length() > 9)
            std::cout << std::right << std::setw(9) << this->contact[i % 8].surname.substr(0, 9) << "." << "|";
        else
            std::cout << std::right << std::setw(10) << this->contact[i % 8].surname << "|";
        if(this->contact[i % 8].nickName.length() > 9)
            std::cout << std::right << std::setw(9) << this->contact[i % 8].nickName.substr(0, 9) << "." << "|" << std::endl;
        else
            std::cout << std::right << std::setw(10) << this->contact[i % 8].nickName << "|" << std::endl;
        this->contact[i % 8].index = i % 8;
    }
    Phonebook::showContacts();
}


void Phonebook::showContacts() {
    std::cout << "Please select index: ";
    std::string selectIndex;
    int selectNum;
    std::getline(std::cin, selectIndex);
    while(!isNumeric(selectIndex) || selectIndex.length() < 1 || selectIndex.length() > 2)
    {
        std::cout << "Please enter number : ";
        std::getline(std::cin, selectIndex);
    }
    selectNum = std::stoi(selectIndex);
    while((selectNum < 0 || selectNum > 7))
    {
        std::cout << "Please enter number : ";
        std::getline(std::cin, selectIndex);
        if(selectIndex.length() > 0 && isNumeric(selectIndex))
            selectNum = std::stoi(selectIndex);
    }
    if((selectNum < this->totalIndex + 1 || selectNum != 0))
    {
        while((selectNum > this->totalIndex - 1)) {
            std::cout << "Please enter number : ";
            std::getline(std::cin, selectIndex);
            if ((selectIndex.length() > 0 && selectIndex.length() < 2) && isNumeric(selectIndex))
                selectNum = std::stoi(selectIndex);
        }
    }
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Name : " << this->contact[selectNum].name << std::endl;
    std::cout << "Surname : " << this->contact[selectNum].surname << std::endl;
    std::cout << "Nickname : " << this->contact[selectNum].nickName << std::endl;
    std::cout << "Phone Number : " << this->contact[selectNum].phoneNumber << std::endl;
    std::cout << "Darkest secret : " << this->contact[selectNum].darkSecret << std::endl;
    std::cout << "------------------------------------" << std::endl;
}


int Phonebook::getTotalIndex() {
    return this->totalIndex;
}