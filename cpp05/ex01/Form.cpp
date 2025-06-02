#include "Form.hpp"

const char* Form::GradeTooLowException::what() const throw()
{
    return "Lowest possible grade is 150";
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Highest possible grade is 1";
}

Form::Form() : name("Default Form"), is_signed(false), grade_execute(150), grade_sign(150)
{}

Form::Form(const std::string &userdef_name, const int execute, const int sign) : name(userdef_name), grade_execute(execute), grade_sign(sign)
{
    if(execute < 1 || sign < 1)
        throw GradeTooHighException();
    if(execute > 150 || sign > 150)
        throw GradeTooLowException();    
    is_signed = false;
}

Form::Form(const Form& other) : name(other.name), 
grade_execute(other.grade_execute), grade_sign(other.grade_sign)
{}

Form& Form::operator=(const Form& other)
{
    if(this != &other)
        this->is_signed = other.is_signed;
    return *this;
}

Form::~Form() {}

//getters 

const std::string& Form::getName() const
{
    return this->name;
}


int Form::getExecuteGrade() const
{
    return grade_execute;
}

int Form::getSignGrade() const
{
    return grade_sign;
}

bool Form::isSigned() const
{
    return is_signed;
}

//sign member function
void Form::beSigned(const Bureaucrat& employee)
{
    if(employee.getGrade() < this->grade_sign)
    {
        is_signed = true;
        return;
    }
    throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &stream, const Form& form)
{
    stream << form.getName() << " form has " << form.getExecuteGrade() <<
     " executive grade and " << form.getSignGrade() << " points if sign grade\n";
    return stream;
}