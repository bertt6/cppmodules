#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    try
    {
        Bureaucrat a(12, "Berat");
        Form c("Dava", 15, 15);
        a.signForm(c);

    }
    catch(const std::exception& e)
    {
        cout << "This error is: " << e.what() << endl;
    }
    
}