#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "str'nin adresi : " << &str << std::endl;
    std::cout << "stringPTR'nin adresi : " << stringPTR << std::endl;
    std::cout << "stringREF'in adresi : " << &stringREF << std::endl
              << std::endl;

    std::cout << "str'nin değeri : " << str << std::endl;
    std::cout << "stringPTR'nin değeri : " << *stringPTR << std::endl;
    std::cout << "stringREF'in değeri : " << stringREF << std::endl;
}