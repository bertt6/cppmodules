#include "Form.hpp"

Form::Form() : _isSigned(false), _grade(1), _name(""), _execGrade(1) {}

Form::Form(const Form &cpy) : _name(cpy._name), _isSigned(cpy._isSigned), _grade(cpy._grade), _execGrade(cpy._execGrade) {}

Form::Form(string name, int grade, int execGrade) : _name(name), _grade(grade), _execGrade(execGrade)
{
    if (this->_grade > 150 || this->_execGrade > 150)
        throw GradeTooLowException();
    else if (this->_grade < 1 || this->_execGrade < 1)
        throw GradeTooHighException();
}

Form::~Form()
{
    cout << "Destructor called" << endl;
}

bool Form::getSign(void) const
{
    return _isSigned;
}

int Form::getGrade(void) const
{
    return _grade;
}

string Form::getName(void) const
{
    return _name;
}

int Form::getExecGrade(void) const
{
    return _execGrade;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_grade)
        throw GradeTooLowException();
    this->_isSigned = true;
}

ostream &operator<<(ostream &os, const Form &form)
{
    os << form.getName() << endl
       << form.getGrade() << endl
       << form.getExecGrade() << endl
       << form.getSign() << endl;
    return os;
}

Form &Form::operator=(const Form &copy)
{
    if (this != &copy)
        this->_isSigned = copy.getSign();
    return *this;
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low! Grade needs to be between 1 and 150";
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade Too High! Grade needs to be between 1 and 150";
}