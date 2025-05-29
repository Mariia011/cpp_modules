#ifndef INTERN_HPP
#define INTERN_HPP

#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

class Intern{
public:  
    Intern();
    Intern(const Intern& other);
    Intern &operator=(const Intern&);   
    ~Intern();
public:
    AForm *makeForm(const std::string& formType, const std::string& formTarget);
};

#endif