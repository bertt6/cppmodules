#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    try
    {
        Bureaucrat a(12, "Berat");

    }
    catch(const std::exception& e)
    {
        cout << "This error is: " << e.what() << endl;
    }
    
}