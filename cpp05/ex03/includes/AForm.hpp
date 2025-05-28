#pragma once 

#include "../includes/Bureaucrat.hpp"

class Bureaucrat;

class AForm
{   
public:
    struct FormNotSigned : public std::exception
    {
    	virtual const char* what() const throw();
    };
    struct GradeTooHighException : public std::exception
    {
    	virtual const char *what() const throw();
    };
    struct GradeTooLowException : public std::exception
    {
    	virtual const char *what() const throw();
    };
public: 
    AForm();
    AForm(const AForm&);
    AForm(const std::string &userdef_name, const std::string& userdef_target, const int execute, const int sign);
    AForm& operator=(const AForm&);
    virtual ~AForm();
protected:
    const std::string   name;
    const std::string   target;
    bool                is_signed;
    const int           grade_execute;
    const int           grade_sign;
public:
    const std::string& getName() const;
    int getExecuteGrade() const;
    int getSignGrade() const;
    bool isSigned() const;
    virtual void beSigned(const Bureaucrat&);
    virtual void execute (Bureaucrat const & executor) const = 0; //this is a point where the base class becomes abstract
};

std::ostream& operator<<(std::ostream&, const AForm&);