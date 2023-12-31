
#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Bureaucrat;

class   AForm
{
    private:
        bool _sign;
        const int _grade;
        const string _name;
        const int _execGrade;
    public:
        AForm();
        virtual ~AForm();
        AForm(const AForm &);
        AForm &operator = (const AForm &);
        AForm(string name, int grade, int execGrade);

        bool getSign(void) const;
        int getGrade(void) const;
        string getName(void) const;
        int getExecGrade(void) const;
        
        void beSigned(Bureaucrat &);

        virtual void execute(Bureaucrat const & executor) const = 0;
        bool    executer_control(const Bureaucrat &executor) const;

        class GradeTooLowException: public std::exception
        {
	        public:
		        virtual const char *what()const throw();
        };
        class GradeTooHighException: public std::exception
        {
	        public:
		        virtual const char *what()const throw();
	    };
        class FormNotSigned: public std::exception
        {
            public:
                virtual const char *what()const throw();
        };

};

ostream &operator << (ostream &os, const AForm &);

#endif