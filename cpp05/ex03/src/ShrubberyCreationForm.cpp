#include "../includes/ShrubberyCreationForm.hpp"

// const char* ShrubberyCreationForm::GradeTooLowExceptionExec::what() const throw() 
// {
//     return "Exception: Lowest possible grade for ShrubberyCreationForm execution is 137";
// }

// const char* ShrubberyCreationForm::GradeTooLowExceptionSign::what() const throw() 
// {
//     return "Exception: Lowest possible grade for ShrubberyCreationForm signing is 145";
// }

// const char* ShrubberyCreationForm::GradeNotCorrect::what() const throw()
// {
//     return "Exception: Your grade is not correct";
// }

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &userdef_name, const std::string& userdef_target) : AForm(userdef_name, userdef_target, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{*this = other;}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &userdef_name, const std::string& userdef_target, const int grade_execute, const int grade_sign) :
AForm(userdef_name, userdef_target, grade_execute, grade_sign)
{
    if(grade_execute != 145 || grade_sign != 137)
        throw GradeNotCorrect();
    is_signed = false;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other) {
        AForm::operator=(other);
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!this->is_signed)
        throw AForm::FormNotSigned();
    if (executor.getGrade() > this->getExecuteGrade())
        throw GradeTooLowExceptionExec();
    std::ofstream outfile(std::string(this->getName() + "_shrubbery").c_str());
    if (outfile.is_open())
    {
        outfile << starry_night;
        outfile.close();
    }
    else
        std::clog << "Wrong permissions of file\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}