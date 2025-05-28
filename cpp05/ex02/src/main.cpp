#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
    
int main() 
{
    Bureaucrat obj1("Volodya", 20);
    Bureaucrat obj4("Masha", 10);
    // std::cout << "INITIAL GRADE OF " << obj1.getName() << " IS " << obj1.getGrade() << std::endl;
    // std::cout << "INITIAL GRADE OF " << obj4.getName() << " IS " << obj4.getGrade() << std::endl;
    // try
    // {
    //     PresidentialPardonForm president_pardon("presidental form", "juju");
    //     obj1.signForm(president_pardon);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // try
    // {
    //     RobotomyRequestForm Robot("Robotomy Form", "juju");
    //     obj1.signForm(Robot);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    try
    {
        ShrubberyCreationForm shrubbery("JUJU", "juju");
        obj1.signForm(shrubbery);
        shrubbery.execute(obj1);
        obj1.signForm(shrubbery);
    }
    catch(std::exception &e)
    {
        std::clog << e.what() << std::endl;
    }
    return 0;
}