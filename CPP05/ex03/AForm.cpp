#include "AForm.hpp"

AForm::AForm() : _sign(false), _grade(1), _name(""), _execGrade(1) {}

AForm::AForm(string name, int grade, int execGrade) : _sign(false), _grade(grade), _name(name), _execGrade(execGrade)
{
    if(this->_grade > 150 || this->_execGrade > 150)
        throw GradeTooLowException();
    else if (this->_grade < 1 || this->_execGrade < 1) 
        throw GradeTooHighException();
}

AForm::AForm(const AForm &copy) : _grade(copy._grade), _name(copy._name), _execGrade(copy._execGrade) {}

AForm::~AForm() 
{
    cout << "Destructor called" << endl;
}

AForm &AForm::operator = (const AForm &copy)
{
    if (this != &copy)
        this->_sign = copy.getSign();
    return *this;
}

bool AForm::getSign(void) const
{
    return this->_sign;
}

int AForm::getGrade(void) const
{
    return this->_grade;
}

string AForm::getName(void) const
{
    return this->_name;
}

int AForm::getExecGrade(void) const
{
    return this->_execGrade;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_grade)
        throw GradeTooLowException();
    this->_sign = true;
}

ostream &operator << (ostream &os, const AForm &form)
{
    os << form.getName() << endl
       << form.getGrade() << endl
       << form.getExecGrade() << endl
       << form.getSign() << endl;
    return os;
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (this->_sign == false)
        throw FormNotSigned();
    else if (this->executer_control(executor) == false)
        throw GradeTooLowException();
}

bool AForm::executer_control(const Bureaucrat &executor) const
{
    if (this->getSign() == false)
        throw FormNotSigned();
    else if (executor.getGrade() < this->getExecGrade())
        throw GradeTooLowException();
    return true;
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade Too Low! Grade needs to be between 1 and 150";
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade Too High! Grade needs to be between 1 and 150";
}

const char *AForm::FormNotSigned::what() const throw()
{
    return "Form not signed!";
}
