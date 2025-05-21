#include "Bureaucrat.hpp"
    
int main() 
{
    Bureaucrat obj1("Volodya", 150);
    Bureaucrat obj2("Meow", 1);
    std::cout << "INITIAL GRADE OF " << obj1.getName() << " IS " << obj1.getGrade() << std::endl;
    std::cout << "INITIAL GRADE OF " << obj2.getName() << " IS " << obj2.getGrade() << std::endl;
    
    try
    {
        obj1.gradeDecrement();
        obj2.gradeIncrement();
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    obj2 = obj1;
    std::cout << obj2;
    return 0;
}