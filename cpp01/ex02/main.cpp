/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:06:38 by marikhac          #+#    #+#             */
/*   Updated: 2025/04/19 18:32:45 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main()
{
    
    std::string the_brain;
    the_brain = "I want some sugarrrr";
    std::string *stringPTR = &the_brain;
    std::string &stringREF = the_brain; // reference var
    
    std::cout << CYAN << "The memory address of the string variable: " << RESET << &the_brain << std::endl;
    std::cout << CYAN << "The memory address held by string pointer: " << RESET << stringPTR << std::endl;
    std::cout << CYAN << "The memory address held by string reference: " << RESET << &stringREF << std::endl;
    std::cout << std::endl;
    
    std::cout << BOLDYELLOW << "The value of the string variable: " << RESET << the_brain << std::endl;
    std::cout << BOLDYELLOW << "The value of the string stringPTR: " << RESET << *stringPTR << std::endl;
    std::cout << BOLDYELLOW << "The value of the string stringREF: " << RESET << stringREF << std::endl;
    


}