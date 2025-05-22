#pragma once 

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{   
public:
struct GradeTooHighException : public std::exception
{
	const char *what() const throw();
};
struct GradeTooLowException : public std::exception
{
	const char *what() const throw();
};
public: 
    Form();
    Form(const Form&);
    Form(const std::string &userdef_name, const int execute, const int sign);
    Form& operator=(const Form&);
    ~Form();
private:
    const std::string name;
    bool is_signed;
    const int grade_execute;
    const int grade_sign;
public:
    const std::string& getName() const;
    int getExecuteGrade() const;
    int getSignGrade() const;
    bool isSigned() const;
    void beSigned(const Bureaucrat&);
};

std::ostream& operator<<(std::ostream&, const Form&);