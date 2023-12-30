#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::ostream;
using std::string;

class Bureaucrat;

class Form
{
    private:
        const string _name;
        bool _isSigned;
        const int _grade;
        const int _execGrade;

    public:
        Form();
        Form(const Form &);
        ~Form();
        Form &operator=(const Form &);
        Form(string name, int grade, int execGrade);

        bool getSign(void) const;
        int getGrade(void) const;
        string getName(void) const;
        int getExecGrade(void) const;

        void beSigned(Bureaucrat &);

        class GradeTooLowException : public std::exception
        {
        public:
            const char *what() const throw();
        };
        class GradeTooHighException : public std::exception
        {
        public:
            const char *what() const throw();
        };
};

ostream &operator<<(ostream &os, const Form &);

#endif