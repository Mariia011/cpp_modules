#include "../includes/AForm.hpp"

const char* AForm::FormNotSigned::what() const throw()
{
    return "FORM IS NOT SIGNED";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Lowest possible grade is 150";
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Highest possible grade is 1";
}

AForm::AForm() : name("Default AForm"), is_signed(false), grade_execute(150), grade_sign(150)
{
   std::cout << "Destructor for " << name << " called\n";
}

AForm::AForm(const std::string &userdef_name, const std::string& userdef_target, const int execute, const int sign) : name(userdef_name), target(userdef_target), grade_execute(execute), grade_sign(sign)
{
    if(execute < 1 || sign < 1)
        throw GradeTooHighException();
    if(execute > 150 || sign > 150)
        throw GradeTooLowException();    
    is_signed = false;

    std::cout << "Parametric constructor for " << name << " has been invoked\n";
}

AForm::AForm(const AForm& other) : name(other.name), 
grade_execute(other.grade_execute), grade_sign(other.grade_sign)
{
    std::cout << "Copy constructor for " << this->name << " has been called\n";
}

AForm& AForm::operator=(const AForm& other)
{
    std::cout << "Assignment operator definition has been invoked\n";
    if(this != &other)
        this->is_signed = other.is_signed;
    return *this;
}

AForm::~AForm()
{
    std::cout << "Destructor for " << this->name << " called\n";
}

//getters 

const std::string& AForm::getName() const
{
    return this->name;
}

int AForm::getExecuteGrade() const
{
    return grade_execute;
}

int AForm::getSignGrade() const
{
    return grade_sign;
}

bool AForm::isSigned() const
{
    return is_signed;
}

//sign member function
void AForm::beSigned(const Bureaucrat& employee)
{
    if(employee.getGrade() < this->grade_sign)
    {
        is_signed = true;
        return;
    }
    throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &stream, const AForm& Aform)
{
    stream << Aform.getName() << " Aform has " << Aform.getExecuteGrade() <<
     " executive grade and " << Aform.getSignGrade() << " points if sign grade\n";
    return stream;
}