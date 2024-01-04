#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("default", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const string &target) : AForm(target, 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
    _target = copy._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &copy)
{
    (void)copy;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (this->executer_control(executor)) 
        cout << this->_target << " has been pardoned by Zafod Beeblebrox" << endl;
}