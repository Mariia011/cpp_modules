#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &userdef_name, const std::string& userdef_target) : AForm(userdef_name, userdef_target, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{*this = other;}

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
    } 
    else 
    {
        std::cout << "Robotomy failed on " << this->target << ".\n";
    }
}

RobotomyRequestForm::~RobotomyRequestForm(){}