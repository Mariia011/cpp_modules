#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
    
int main() 
{
    Bureaucrat obj1("Volodya", 50);
    Bureaucrat obj4("Volodya", 170);
    std::cout << "INITIAL GRADE OF " << obj1.getName() << " IS " << obj1.getGrade() << std::endl;
    try
    {
        PresidentialPardonForm president_pardon("the_form", "juju", 30, 1);
        obj1.signForm(president_pardon);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        RobotomyRequestForm Robot("the_form", "juju", 72, 45);
        obj1.signForm(Robot);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // PresidentialPardonForm president_pardon("the_form", "juju", 25, 5);
    // president_pardon.execute(obj1);
    return 0;
}