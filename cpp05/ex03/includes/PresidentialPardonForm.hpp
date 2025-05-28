#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "../includes/AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
    struct GradeSignNotCorrect : public std::exception{const char* what() const throw();}; 
    struct GradeExecNotCorrect : public std::exception{const char* what() const throw();}; 
    struct FormNotSigned : public std::exception{const char* what() const throw();};
    struct GradeTooLowExceptionExec : public std::exception{const char* what() const throw();}; 
public:
    PresidentialPardonForm(const std::string&, const std::string&);
    PresidentialPardonForm(const std::string &userdef_name, const std::string &target, const int execute, const int sign);
    PresidentialPardonForm(const PresidentialPardonForm&);
    PresidentialPardonForm& operator=(const PresidentialPardonForm&);
    ~PresidentialPardonForm();
public: 
    void execute (Bureaucrat const & executor) const;
};

#endif