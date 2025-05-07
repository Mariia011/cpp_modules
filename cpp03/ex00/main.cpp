#include "ClapTrap.hpp"

int main()
{	
	ClapTrap obj1("Harvey");
	ClapTrap obj2("PJ");
	obj2.attack("Harvey");
	obj1 = obj2;
	ClapTrap newone = obj1;
	newone.attack("BOSS MEGA BOBA");
	newone.takeDamage(5);
	newone.attack("BOSS MEGA BOBA");
	obj2.takeDamage(7);
	obj2.beRepaired(2);
	obj2.beRepaired(7);

	return 0;
}