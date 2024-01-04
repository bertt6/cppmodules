#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default")
{
    this->_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &arg) : _name(arg._name)
{
    this->_grade = arg._grade;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &arg)
{
    this->_grade = arg._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(int grade, string name) : _name(name)
{
    if (_grade > 150)
        throw GradeTooLowException();
    else if (_grade < 1)
        throw GradeTooHighException();
    this->_grade = grade;
}

int Bureaucrat::getGrade(void) const
{
    return this->_grade;
}

string Bureaucrat::getName(void) const
{
    return this->_name;
}

void Bureaucrat::incrementGrade(void)
{
    if(this->_grade - 1 < 1)
        throw GradeTooHighException();
    this->_grade -= 1;
}

void Bureaucrat::decrementGrade(void)
{
    if(this->_grade + 1 > 150)
        throw GradeTooHighException();
    this->_grade += 1;
} 

ostream& operator << (ostream& os, const Bureaucrat &arg)
{
    os << arg.getName() << ", bureaucrat grade " << arg.getGrade() << ".";
    return os;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low! Grade needs to be between 1 and 150";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High! Grade needs to be between 1 and 150";
}