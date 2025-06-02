#include "Bureaucrat.hpp"
    
int main() 
{
    Bureaucrat bureaucrat_obj("Volodya", 50);
    std::cout << "INITIAL GRADE OF " << bureaucrat_obj.getName() << " IS " << bureaucrat_obj.getGrade() << std::endl;
    Bureaucrat bureaucrat_obj2("Mariia", 10);
    try
    {
        Form form_obj("incorrect", 1000, 4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    
    
    try
    {
        Form form_obj("incorrect2", -4, 4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    Form formik("Dox", 50, 50);   
    std::cout << bureaucrat_obj;
    bureaucrat_obj.signForm(formik);

    bureaucrat_obj.gradeIncrement();
    std::cout << bureaucrat_obj;
    bureaucrat_obj.signForm(formik);

    return 0;
}