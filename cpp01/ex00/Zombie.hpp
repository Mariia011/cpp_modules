#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
    public: 
        Zombie(std::string);
        ~Zombie();
        void announce(void);
        void set_name();
        std::string name_getter();
    private: 
        std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif //ZOMBIE_HPP