#pragma once 

#include <iostream>
#include <string>
#include <stdexcept>

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

class Bureaucrat 
{
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
};

   std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj);