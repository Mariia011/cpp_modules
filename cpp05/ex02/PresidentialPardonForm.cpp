#include "PresidentialPardonForm.hpp"

const char* PresidentialPardonForm::GradeTooLowExceptionExec::what() const throw() 
{
    return "Lowest possible grade for PresidentialPardonForm execution is 5";
}

const char* PresidentialPardonForm::GradeNotCorrect::what() const throw()
{
    return "Your grade is not correct";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &userdef_name, const std::string& userdef_target) : AForm(userdef_name, userdef_target, 25, 5)
{ std::cout << "Constructor has been called\n";}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
{*this = other;}

PresidentialPardonForm::PresidentialPardonForm(const std::string &userdef_name, const std::string& userdef_target, const int grade_execute, const int grade_sign) :
AForm(userdef_name, userdef_target, grade_execute, grade_sign)
{
    if(grade_execute != 5 || grade_sign != 25)
        throw GradeNotCorrect();
    is_signed = false;
    std::cout << "Parametric constructor for " << name << " has been invoked\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other) {
        AForm::operator=(other);
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->is_signed)
		throw AForm::FormNotSigned();
    if(executor.getGrade() < this->grade_execute)
        throw GradeTooLowExceptionExec();
    else
        std::cout << target << "has been pardoned by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm::~PresidentialPardonForm(){std::cout << "Destructor for Presidential Pardon Form has been invoked";}