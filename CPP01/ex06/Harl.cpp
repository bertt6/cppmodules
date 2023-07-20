#include "Harl.hpp"

void Harl::debug(void) {
    std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout <<  "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout <<  "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout <<  "[ERROR]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    std::string funcitonName[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*f[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
   
    int index = 0;
    int i = 0;
    for(i = 0; i < 4; i++) {
        if(level == funcitonName[i])
        {
            index = i;
            break;
        }
    }
    if(i == 4)
        return;
    switch (index)
    {
        case 0:
            (this->*f[0])();
        case 1:
            (this->*f[1])();
        case 2:
            (this->*f[2])();
        case 3:
            (this->*f[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}