#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

using std::cout;
using std::endl;
using std::string;
using std::ostream;

class AForm;

class Bureaucrat {
    private:
        const string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &);
        Bureaucrat &operator = (const Bureaucrat &);
        ~Bureaucrat();
        Bureaucrat(int, const string);

        int     getGrade(void) const;
        string  getName() const;
        
        void    incrementGrade(void);
        void    decrementGrade(void);
        void    signForm(AForm &form);

        void    executeForm(AForm const &);

        class GradeTooLowException: public std::exception
        {
            public:
                const char *what()const throw();
        };
        class GradeTooHighException: public std::exception
        {
            public:
                const char *what()const throw();
        };
};

ostream& operator << (ostream& os, const Bureaucrat &);

#endif