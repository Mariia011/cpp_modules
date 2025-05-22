#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : name("Default RobotomyRequestForm"), is_signed(false), grade_execute(150), grade_sign(150)
{
   std::cout << "Default destructor for " << name << " called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &userdef_name, const int execute, const int sign) : name(userdef_name), grade_execute(execute), grade_sign(sign)
{
    if(execute < 1 || sign < 1)
        throw GradeTooHighException();
    if(execute > 150 || sign > 150)
        throw GradeTooLowException();   
    is_signed = false;
    std::cout << "Parametric constructor for " << name << " has been invoked\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : name(other.name), 
grade_execute(other.grade_execute), grade_sign(other.grade_sign)
{
    std::cout << "Copy constructor for " << this->name << " has been called\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    std::cout << "Assignment operator definition has been invoked\n";
    if(this != &other)
        this->is_signed = other.is_signed;
    return *this;

}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "Default destructor for " << this->name << " called\n";
}
