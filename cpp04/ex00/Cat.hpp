#include "Animal.hpp"

class Cat : Animal
{
	public: 
		Cat();
		Cat(const Cat&);
		Cat& operator=(const Cat&);
		~Cat();
	public:
		void makeSound();

};