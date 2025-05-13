
#include "Zombie.hpp"

int t_main()
{
    int ZombieNum = 5;
    Zombie *horde = zombieHorde(ZombieNum, "Mashuki");
    if(horde)
    {
        for(int i = 0; i < ZombieNum; ++i)
            horde[i].announce();
    }
    delete[] horde; 
    horde = NULL;
    if(horde != NULL)
        std::cout << "You left some leaks\n";
    return 0;
}

int main()
{
    t_main();
    return 0;
}