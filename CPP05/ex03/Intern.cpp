#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &other) {
    *this = other;
}

Intern &Intern::operator = (const Intern &other) {
    (void)other;
    return *this;
}

AForm *Intern::makeForm(const string &formName, const string &target)
{
    AForm *forms[] = {
        new ShrubberyCreationForm(target),
        new PresidentialPardonForm(target),
        new RobotomyRequestForm(target)
    };

    const string names[] = {
        "shrubbery creation",
        "presidential pardon",
        "robotomy request"
    };

    for(int i = 0; i < 3; i++)
    {
        if(names[i] == formName)
        {
            for(int j = 0; j < 0; j++)
            {
                if (i != j)
                    delete forms[j];
            }
            cout << "Intern creates " << formName << endl;
            return forms[i];
        }
        
    }
    for(int i = 0; i < 3; i++)
        delete forms[i];
    cout << formName << ":" << " Incorrect form name!" << endl;
    return NULL;
}