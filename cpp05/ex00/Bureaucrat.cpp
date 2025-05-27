#include "Bureaucrat.hpp"

const char* GradeTooHighException::what() const throw(){return "the Grade of the obj is 1, you cannot go further";}

const char* GradeTooLowException::what() const throw(){	return "the Grade of the obj is 150, limit exceeded";}

//OCF support

Bureaucrat::Bureaucrat() : name("Default"), grade(150)
{}

Bureaucrat::Bureaucrat(const std::string &userdef_name, short userdef_grade) : name(userdef_name) 
{
	if(userdef_grade < 1)
		throw GradeTooHighException();
	if(userdef_grade > 150)
		throw GradeTooLowException();
	this->grade = userdef_grade;
    std::cout << "Parametric constructor for " << this->name << " called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name)
{
	*this = other;
	std::cout << "Copy constructor for " << this->name << " called\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Copy assignment operator for " << this->name <<  " called\n";
	if(this != &other)
	    this->grade = other.grade;
	return *this;
}

Bureaucrat::~Bureaucrat(){std::cout << "Destructor for " << this->name << " called\n";}

//public member functions

void Bureaucrat::gradeIncrement()
{
	if(grade <= 1)
		throw GradeTooHighException();
	--grade;
}

void Bureaucrat::gradeDecrement()
{
	if(grade >= 150)
		throw GradeTooLowException();
	++grade;
}

const std::string& Bureaucrat::getName() const{return name;}
    
short Bureaucrat::getGrade() const{return grade;}

// ostream overload
std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj)
{
	stream << obj.getName() <<  " bureaucrat grade " << obj.getGrade() << "\n";
	return stream;
}