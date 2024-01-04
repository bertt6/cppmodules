#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    try
    {
        Bureaucrat a(21, "test");
        cout << a << endl;

	    Form form("file", 22, 3);
	    a.signForm(form);
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    }
}