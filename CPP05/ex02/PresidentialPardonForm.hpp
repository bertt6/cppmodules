#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string	_target;
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(const std::string &);
        PresidentialPardonForm(const PresidentialPardonForm&);
        PresidentialPardonForm& operator=(const PresidentialPardonForm&);
        
        virtual void execute(Bureaucrat const &) const;
};

#endif