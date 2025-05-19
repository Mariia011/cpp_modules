#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

class Animal 
{
	public: 
		Animal();
		Animal(std::string);
		Animal(const Animal&);
		Animal& operator=(const Animal&);
		virtual ~Animal();
	protected:
		std::string type;
	public: 
		virtual std::string getType() const;
		void setType(const std::string);
		virtual void makeSound() const;
};

#endif