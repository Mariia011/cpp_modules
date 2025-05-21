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
{
   std::cout << "Default destructor for " << name << " called\n";
}

Form::Form(const std::string &userdef_name, const int execute, const int sign) : name(userdef_name), grade_execute(execute), grade_sign(sign)
{
    if(execute < 1 || sign < 1)
        throw GradeTooHighException();
    if(execute > 150 || sign > 150)
        throw GradeTooLowException();    
    is_signed = false;
    std::cout << "Parametric constructor for " << name << " has been invoked\n";
}

Form::Form(const Form& other) : name(other.name), 
grade_execute(other.grade_execute), grade_sign(other.grade_sign)
{
    std::cout << "Copy constructor for " << this->name << " has been called\n";
}

Form& Form::operator=(const Form& other)
{
    std::cout << "Assignment operator definition have been invoked\n";
    if(this != &other)
        this->is_signed = other.is_signed;
    return *this;
}

Form::~Form()
{
    std::cout << "Default destructor for " << this->name << " called\n";
}

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
    if(employee.getGrade() >= this->grade_sign)
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