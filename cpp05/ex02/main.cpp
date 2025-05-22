#include "Bureaucrat.hpp"
    
int main() 
{
    Bureaucrat obj1("Volodya", 50);
    std::cout << "INITIAL GRADE OF " << obj1.getName() << " IS " << obj1.getGrade() << std::endl;
    Bureaucrat obj2("Meow", 10);
    try
    {
        Form formik("Dox", 1000, 4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    
    try
    {
        Form formik("Dox", 3100, 4);   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    } 
    Form formik("Dox", 100, 4);   
    obj1.signForm(formik);
    obj2.gradeIncrement();

    return 0;
}