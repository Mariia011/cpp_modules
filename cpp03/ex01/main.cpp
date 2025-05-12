#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{	
	ScavTrap scav("Harvey");
	ScavTrap obj2("PJ");
	obj2.attack("BOBA");
	obj2.attack("BIBAAA");
	// ClapTrap newone = scav;
	// newone.attack("BOSS MEGA BOBA");
	// newone.takeDamage(5);
	// newone.attack("BOSS MEGA BOBA");
	obj2.takeDamage(7);
	obj2.takeDamage(21);
	obj2.takeDamage(72);
	obj2.beRepaired(2);
	obj2.beRepaired(7);

	return 0;
}