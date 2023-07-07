#include "phonebook.hpp"

//10 KARAKTERİ GEÇERSE 9 KARAKTER KOY SONUNA . KOY
// 8 tane contact geçerse 9. en eskinin yerine gçemesi lazım

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

void Phonebook::addContact() {
    std::cout << "Please enter name : ";
    std::cin >> this->contact[index % 8].name;
    while(!isAlphabetic(this->contact[index % 8].name) || this->contact[index % 8].name.length() == 0)
    {
        std::cout << "Invalid input. Please enter a alpabetical character : ";
        std::cin >> this->contact[index % 8].name;
    }
    std::cout << "Please enter surname : ";
    std::cin >> this->contact[index % 8].surname;
    while(!isAlphabetic(this->contact[index % 8].name))
    {
        std::cout << "Invalid input. Please enter a alpabetical character : ";
        std::cin >> this->contact[index % 8].surname;
    }
    std::cout << "Please enter nickname : ";
    std::cin >> this->contact[index % 8].nickName;
    std::cout << "Please enter phone number : ";
    std::cin >> this->contact[index % 8].phoneNumber;
    while(!isNumeric(this->contact[index % 8].phoneNumber))
    {
        std::cout << "Invalid input. Please enter a numeric character : ";
        std::cin >> this->contact[index % 8].phoneNumber;
    }
    std::cout << "Please enter darkest secret : ";
    std::cin >> this->contact[index % 8].darkSecret;
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

        std::cout << std::right << std::setw(10) << i << "|";
        if(this->contact[i].name.length() > 9)
            std::cout << std::right << std::setw(10) << this->contact[i].name.substr(0, 9) << "." << "|";
        else
            std::cout << std::right << std::setw(10) << this->contact[i].name << "|";
        if(this->contact[i].surname.length() > 9)
            std::cout << std::right << std::setw(10) << this->contact[i].surname.substr(0, 9) << "." << "|";
        else
            std::cout << std::right << std::setw(10) << this->contact[i].surname << "|";
        if(this->contact[i].nickName.length() > 9)
            std::cout << std::right << std::setw(10) << this->contact[i].nickName.substr(0, 9) << "." << "|" << std::endl;
        else
            std::cout << std::right << std::setw(10) << this->contact[i].nickName << "|" << std::endl;
        this->contact[i].index = i;
    }
    Phonebook::showContacts();
}


void Phonebook::showContacts() {
    std::cout << "Please select index: ";
    std::string selectIndex;
    int selectNum = 0;
    std::cin >> selectIndex;
    while(!isNumeric(selectIndex) || selectIndex.length() < 1)
    {
        std::cout << "Please enter number" << std::endl;
    }
    if(selectNum >= 8)
    {

        while(selectNum >= 8)
        {
            std::cout << "Please enter lower than 8 number" << std::endl;
            std::cin >> selectIndex;
            selectNum = std::stoi(selectIndex);
        }
    }
    else
    {
        std::cout << "------------------------------------" << std::endl;
        std::cout << "Name : " << this->contact[selectNum].name << std::endl;
        std::cout << "Surname : " << this->contact[selectNum].surname << std::endl;
        std::cout << "Nickname : " << this->contact[selectNum].nickName << std::endl;
        std::cout << "Phone Number : " << this->contact[selectNum].phoneNumber << std::endl;
        std::cout << "Darkest secret : " << this->contact[selectNum].darkSecret << std::endl;
        std::cout << "------------------------------------" << std::endl;
    }
}

int Phonebook::getTotalIndex() {
    return this->totalIndex;
}