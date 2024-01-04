#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");

        Bureaucrat b(99, "test");
        b.signForm(*rrf);
        b.executeForm(*rrf);
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    }
}