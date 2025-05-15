#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

class Animal 
{
	public: 
		Animal();
		Animal(const Animal&);
		Animal& operator=(const Animal&);
		~Animal();
	protected:
		std::string type;
	public: 
		std::string getType();
		virtual void makeSound();

};

#endif