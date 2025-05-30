#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public: 
		Dog();
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		~Dog();
	protected:
		std::string type;
	public: 
		std::string getType() const;
		void makeSound() const;
};

#endif