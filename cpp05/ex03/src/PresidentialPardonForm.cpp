#include "../includes/PresidentialPardonForm.hpp"

// const char* PresidentialPardonForm::GradeTooLowExceptionExec::what() const throw() 
// {
//     return "Exception: Lowest possible grade for PresidentialPardonForm execution is 5";
// }

// const char* PresidentialPardonForm::GradeSignNotCorrect::what() const throw()
// {
//     return "Exception: Your sign grade in PresidentalForm obj is not correct";
// }

// const char* PresidentialPardonForm::GradeExecNotCorrect::what() const throw()
// {
//     return "Exception: Your exec grade in PresidentalForm obj is not correct";
// }

PresidentialPardonForm::PresidentialPardonForm(const std::string &userdef_name, const std::string& userdef_target) : AForm(userdef_name, userdef_target, 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
{*this = other;}

PresidentialPardonForm::PresidentialPardonForm(const std::string &userdef_name, const std::string& userdef_target, const int grade_execute, const int grade_sign) :
AForm(userdef_name, userdef_target, grade_execute, grade_sign)
{
    if(grade_execute != 5)
        throw AForm::GradeExecNotCorrect();
    if(grade_sign != 25)
        throw GradeSignNotCorrect();
    is_signed = false;
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

PresidentialPardonForm::~PresidentialPardonForm(){}