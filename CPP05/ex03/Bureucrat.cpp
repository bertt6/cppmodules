#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, string name) : _name(name)
{
    cout << "Grade is : " << grade << endl;
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
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

void Bureaucrat::signForm(AForm &form) 
{
    if (form.getSign() == false)
    {
        try
        {
            form.beSigned(*this);
        }
        catch(std::exception &e)
        {
            cout << this->getName() << " couldn't sign " << form.getName() << " because grade too low" << endl;
            return;
        }
        cout << this->getName() << " signed " << form.getName() << endl;
    }
    else 
        cout << this->getName() << " couldn't sign " << form.getName() << " because form already signed" << endl;
}

void    Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        cout << this->getName() << " executed " << form.getName() << endl;
    }
    catch (std::exception &e)
    {
        cout << this->getName() << " could not executed " << form.getName() << endl;
        return;
    }
}