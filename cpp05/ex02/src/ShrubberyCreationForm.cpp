#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &userdef_name, const std::string& userdef_target) : AForm(userdef_name, userdef_target, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{*this = other;}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other) {
        AForm::operator=(other);
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::cout << "ya tut\n";
    if (!this->is_signed)
        throw AForm::FormNotSigned();
    if (executor.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();
    std::ofstream outfile(std::string(this->getName() + "_shrubbery").c_str());
    if (outfile.is_open())
    {
        outfile << ascii_tree;
        outfile.close();
    }
    else
        std::clog << "Wrong permissions of file\n";
    std::cout << "ya tut snova\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}