#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal 
{
    public: 
        WrongAnimal();
        WrongAnimal(const WrongAnimal&);
        WrongAnimal& operator=(const WrongAnimal&);
        virtual ~WrongAnimal();
    protected:
        std::string type;
    public: 
        void setType(const std::string&);
        std::string getType() const;
        void makeSound() const;

};

#endif //wrong_animal