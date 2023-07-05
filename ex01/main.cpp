#include "phonebook.hpp"

int main(int ac, char **av){
    (void)ac;
    (void)av;
    Contact contact[8];
    std::string input;
    Phonebook phonebook;
    while(true)
    {
        std::cout << "Lütfen bir değer giriniz" << std::endl;
        std::cin >> input;
        if(input == "ADD")
        {
            system("clear");
            std::cout << "Lütfen isim soyisim giriz : ";
            std::cin >> contact[0].fullName;
            std::cout << "Lütfen kullanıcı adınızı giriz : ";
            std::cin >> contact[0].nickName;
            std::cout << "Lütfen telefon numaranızı giriz : ";
            std::cin >> contact[0].phoneNumber;
            std::cout << "Lütfen karanlık bir sırrınızı giriz : ";
            std::cin >> contact[0].darkSecret;
            system("clear");
            std::cout << "Yeni kullanıcı eklendi!!" << std::endl;
        }
        else if(input == "SEARCH")
        {
            std::cout << "1. Kullanıcı" << std::endl;
            std::cout << "Isim soyisim : " << contact[0].getFullName() << std::endl;
            std::cout << "Kullanıcı adı : " << contact[0].getNickName() << std::endl;
            std::cout << "Telefon numarası : " << contact[0].getPhoneNumber() << std::endl;
            std::cout << "Karanlık sırrı : " << contact[0].getDarkSecret() << std::endl;
        }
        else if(input == "EXIT")
        {
            system("clear");
            exit(1);
        }
        else
        {
            system("clear");
            std::cout << "Lütfen geçerli bir değer giriniz" << std::endl;
        }
    }

}