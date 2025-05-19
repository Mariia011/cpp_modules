#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
    public:
        AAnimal();
        AAnimal(const AAnimal &other);
        AAnimal &operator=(const AAnimal &rhs);
        virtual ~AAnimal();
    protected:
	    std::string type;
    public: 
	    void setType(const std::string &type);
	    std::string getType(void) const;
	    virtual void makeSound() const = 0;
};

#endif