#include "Bureaucrat.hpp"
    
int main() 
{
    Bureaucrat obj1("Volodya", 50);
    Bureaucrat obj2("Meow", 10);
    std::cout << "INITIAL GRADE OF " << obj1.getName() << " IS " << obj1.getGrade() << std::endl;
    std::cout << "INITIAL GRADE OF " << obj2.getName() << " IS " << obj2.getGrade() << std::endl;

    obj1.gradeDecrement();
    obj2.gradeIncrement();
    std::cout << obj1;
    std::cout << obj2;

    obj2 = obj1;
    std::cout << obj2;

    return 0;
}