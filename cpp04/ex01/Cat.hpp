#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* the_brain;
	public: 
		Cat();
		Cat(const Cat&);
		Cat& operator=(const Cat&);
		~Cat();
	protected:
		std::string type;
	public:
		std::string getType() const;
		void makeSound() const;

};

#endif