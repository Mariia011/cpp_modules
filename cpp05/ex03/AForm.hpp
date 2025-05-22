#pragma once 

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{   
    public:
	struct FormNotSigned : public std::exception
	{
		const char* what() const throw();
	};
	struct GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};
	struct GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};
    public: 
        AForm();
        AForm(const AForm&);
        AForm(const std::string &userdef_name, const int execute, const int sign);
        AForm& operator=(const AForm&);
        virtual ~AForm();
    protected:
        const std::string name;
        bool is_signed;
        const int grade_execute;
        const int grade_sign;
    public:
        const std::string& getName() const;
        int getExecuteGrade() const;
        int getSignGrade() const;
        bool isSigned() const;
        virtual void beSigned(const Bureaucrat&);
};

std::ostream& operator<<(std::ostream&, const AForm&);