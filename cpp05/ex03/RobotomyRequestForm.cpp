#include "RobotomyRequestForm.hpp"

const char* RobotomyRequestForm::GradeTooLowExceptionExec::what() const throw() 
{
    return "Exception: Lowest possible grade for RobotomyRequestForm execution is 5";
}

const char* RobotomyRequestForm::GradeNotCorrect::what() const throw()
{
    return "Exception: Your grade is not correct";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &userdef_name, const std::string& userdef_target) : AForm(userdef_name, userdef_target, 145, 137)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{*this = other;}

RobotomyRequestForm::RobotomyRequestForm(const std::string &userdef_name, const std::string& userdef_target, const int grade_execute, const int grade_sign) :
AForm(userdef_name, userdef_target, grade_execute, grade_sign)
{
    if(grade_execute != 145 || grade_sign != 137)
        throw GradeNotCorrect();
    is_signed = false;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other) {
        AForm::operator=(other);
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->is_signed)
        throw AForm::FormNotSigned();

    if (executor.getGrade() > this->grade_execute)
        throw AForm::GradeTooLowException();

    std::cout << "* BZZZZZZ * Drilling noises...\n";

    if (rand() % 2 == 0) {
        std::cout << this->target << " has been robotomized successfully!\n";
    } else {
        std::cout << "Robotomy failed on " << this->target << ".\n";
    }
}

RobotomyRequestForm::~RobotomyRequestForm(){}