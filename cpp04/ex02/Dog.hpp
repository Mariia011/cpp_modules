#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* the_brain; 
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