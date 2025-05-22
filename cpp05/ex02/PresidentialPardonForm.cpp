#include "PresidentialPardonForm.hpp"

const char* PresidentialPardonForm::GradeTooLowExceptionExec::what() const throw() 
{
    return "Lowest possible grade for PresidentialPardonForm execution is 5";
}

const char* PresidentialPardonForm::GradeTooHighException::what() const throw() 
{
    return "Highest possible grade for PresidentialPardonForm signing is 1";
}


const char* PresidentialPardonForm::GradeTooLowException::what() const throw()
{
    return "Lowest possible grade for PresidentialPardonForm signing is 25";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other){*this = other;}

PresidentialPardonForm::PresidentialPardonForm(const std::string &userdef_name, const int execute, const int sign)
{
    
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm&)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}