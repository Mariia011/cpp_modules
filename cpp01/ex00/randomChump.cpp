#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie stack_zomb(name);
    stack_zomb.announce();
}