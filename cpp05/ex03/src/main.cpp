#include "../includes/Intern.hpp"
  
int main() 
{
    Intern someRandomIntern;
    AForm* ptr1 = someRandomIntern.makeForm("robotomy request", "Bender");
    AForm* ptr2 =  someRandomIntern.makeForm("presidential pardon", "Bender2");
    AForm* ptr3 = someRandomIntern.makeForm("shrubbery creation", "Bender3");
    
    delete ptr1;
    delete ptr2;
    delete ptr3;
    
    return 0;
}