#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("default", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const string &target) : AForm(target, 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
    _target = copy._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &copy)
{
    (void)copy;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (this->executer_control(executor)) 
    {
        cout << "DRRDRDRDRDRDRDRDRDRDRRR" << endl;
        time_t current_time = time(NULL);
        if (current_time % 2 == 0)
            cout << this->_target << " has been robotomize succesfully" << endl;
        else 
            cout << this->_target << " has been rebotomize failed" << endl;
    }