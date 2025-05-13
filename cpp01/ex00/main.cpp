
#include "Zombie.hpp"

int main()
{
    randomChump("stack");
    Zombie* zoomb = newZombie("heap_zombie");
    
    delete zoomb;   
    return 0;
}