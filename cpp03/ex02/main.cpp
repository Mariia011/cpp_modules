#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{	
	ClapTrap("Xlopay");
	ScavTrap scav("TYOMA");
	FragTrap frag("MEOW");
	ScavTrap scav2("PJ");
	ClapTrap newone = scav;
	
	scav.attack("BOBA");
	scav.attack("scav target");
	scav.attack("BIBAAA");
	newone.attack("BOSS MEGA BOBA");
	newone.takeDamage(5);
	newone.attack("BOSS MEGA BOBA");
	
	scav.takeDamage(7);
	scav.takeDamage(21);
	newone.takeDamage(72);
	scav.beRepaired(2);
	scav.beRepaired(7);

	return 0;
}