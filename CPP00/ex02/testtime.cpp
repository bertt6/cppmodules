#include <iostream>
#include <ctime>


int main() {
    time_t ttime = time(0);
    tm *localtime = localtime(&ttime);
    std::cout << localtime->tm_year;
}