#pragma once 

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:
    struct FormNotSigned : public std::exception{const char* what() const throw();};
    struct GradeTooHighException : public std::exception{const char *what() const throw();};
    struct GradeTooLowException : public std::exception {const char *what() const throw();};
public:
    ShrubberyCreationForm(std::string &target);
    ShrubberyCreationForm(const std::string &target, const int execute, const int sign);
    ShrubberyCreationForm(const ShrubberyCreationForm&);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
    ~ShrubberyCreationForm();
public:

}

