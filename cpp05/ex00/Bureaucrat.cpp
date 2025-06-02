#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw(){return "the Grade of the obj is 1, you cannot go further";}

const char* Bureaucrat::GradeTooLowException::what() const throw(){	return "the Grade of the obj is 150, limit exceeded";}

//OCF support

Bureaucrat::Bureaucrat() : name("NO_NAME bureaucrat"), grade(150){}

Bureaucrat::Bureaucrat(const std::string &userdef_name, short userdef_grade) : name(userdef_name) 
{
	if(userdef_grade < 1)
		throw GradeTooHighException();
	if(userdef_grade > 150)
		throw GradeTooLowException();
	this->grade = userdef_grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name)
{
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if(this != &other)
	    this->grade = other.grade;
	return *this;
}

Bureaucrat::~Bureaucrat(){}

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