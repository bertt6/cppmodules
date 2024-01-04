#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat(137, "bureaucrat");
        ShrubberyCreationForm shrubbery("files");

        bureaucrat.signForm(shrubbery);
        bureaucrat.executeForm(shrubbery);
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    } 
}