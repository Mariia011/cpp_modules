#include "../includes/Bureaucrat.hpp"

const char*  Bureaucrat::GradeTooHighException::what() const throw()
{
	return "the Grade is way too high, bye\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "the Grade is way too low, bye\n";
}

//OCF support

Bureaucrat::Bureaucrat() : name(" "), grade(150){}

Bureaucrat::Bureaucrat(const std::string &userdef_name, short userdef_grade) : name(userdef_name) 
{
	if(userdef_grade < 1)
		throw GradeTooHighException();
	if(userdef_grade > 150)
		throw GradeTooLowException();
	this->grade = userdef_grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other){*this = other;}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	this->grade = other.grade;
	return *this;
}

Bureaucrat::~Bureaucrat(){}

//public member functions

void Bureaucrat::gradeIncrement()
{
	if(grade < 1)
		throw GradeTooHighException();
	--grade;
}

void Bureaucrat::gradeDecrement()
{
	if(grade > 150)
		throw GradeTooLowException();
	++grade;
}

const std::string& Bureaucrat::getName() const
{
    return name;
}
    
short Bureaucrat::getGrade() const{return grade;}

void Bureaucrat::signForm(AForm& form) 
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << this->name << " didn't sign " << form.getName() << " because bureaucrat doesn't have enough Grade points"<< std::endl ;
	}
}

// ostream overload

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj)
{
	stream << obj.getName() <<  " bureaucrat grade " << obj.getGrade() << "\n";
	return stream;
}