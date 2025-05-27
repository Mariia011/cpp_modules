#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
    struct GradeNotCorrect : public std::exception{const char* what() const throw();}; 
    struct FormNotSigned : public std::exception{const char* what() const throw();};
    struct GradeTooLowExceptionExec : public std::exception{const char* what() const throw();}; 
public:
    RobotomyRequestForm(const std::string&, const std::string&);
    RobotomyRequestForm(const std::string &userdef_name, const std::string &target, const int execute, const int sign);
    RobotomyRequestForm(const RobotomyRequestForm&);
    RobotomyRequestForm& operator=(const RobotomyRequestForm&);
    ~RobotomyRequestForm();
public: 
    void execute (Bureaucrat const & executor) const;
};
