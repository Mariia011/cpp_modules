#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : Animal
{
	public: 
		Dog();
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		~Dog();
	protected:
		std::string type;
	public: 
		std::string getType();
		void makeSound();
};

#endif