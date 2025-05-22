#pragma once 

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat 
{
public: 
    class GradeTooLowException: public std::exception
    {
        public:
            const char* what() const throw();
    };
    
    class GradeTooHighException: public std::exception
    {
        public:
            const char* what() const throw();
    };
public:
    Bureaucrat();
    Bureaucrat(const std::string&, short);
    Bureaucrat(const Bureaucrat&);
    Bureaucrat& operator=(const Bureaucrat&);
    ~Bureaucrat();
private: 
    const std::string name;
    short grade;
public: 
    void gradeIncrement();
    void gradeDecrement();
    const std::string& getName() const;
    short getGrade() const;
    void signForm(Form&);
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj);