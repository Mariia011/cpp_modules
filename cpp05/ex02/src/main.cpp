#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
    
int main() 
{
    Bureaucrat Vladimir("Volodya", 2);
    Bureaucrat Mariia("Masha", 10);

    try
    {
        PresidentialPardonForm president_pardon("PRESIDENT", "target");
        Vladimir.signForm(president_pardon);
        president_pardon.execute(Vladimir);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
  
    try
    {
        RobotomyRequestForm Robot("ROBOT", "target");
        Vladimir.signForm(Robot);
        Robot.execute(Vladimir);
        Robot.execute(Vladimir);
        Robot.execute(Vladimir);
        Robot.execute(Vladimir);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
  
    try
    {
        Vladimir.gradeIncrement();
        ShrubberyCreationForm shrubbery("SHRUBBERY", "target");
        Vladimir.signForm(shrubbery);
        shrubbery.execute(Vladimir);
        Mariia.signForm(shrubbery);
    }
    catch(std::exception &e)
    {
        std::clog << e.what() << std::endl;
    }
    return 0;
}