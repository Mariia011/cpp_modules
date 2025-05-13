#define CYAN    "\033[36m"
#define BOLDYELLOW  "\033[1m\033[33m"  
#define RESET   "\033[0m"

#include <iostream>
#include <string>

int main()
{
    std::string the_brain;
    the_brain = "I want some sugarrrr";
    std::string *stringPTR = &the_brain; //pointer var
    std::string &stringREF = the_brain; // reference var
    
    std::cout << CYAN << "The memory address of the string variable: " << RESET << &the_brain << std::endl;
    std::cout << CYAN << "The memory address held by string pointer: " << RESET << stringPTR << std::endl;
    std::cout << CYAN << "The memory address held by string reference: " << RESET << &stringREF << std::endl;
    std::cout << std::endl;
    
    std::cout << BOLDYELLOW << "The value of the string variable: " << RESET << the_brain << std::endl;
    std::cout << BOLDYELLOW << "The value of the string stringPTR: " << RESET << *stringPTR << std::endl;
    std::cout << BOLDYELLOW << "The value of the string stringREF: " << RESET << stringREF << std::endl;
    
    return 0;
}