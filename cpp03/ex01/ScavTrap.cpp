
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor for ScavTrap has been called" << "\n";
}

ScavTrap::ScavTrap(const std::string& name_userdef) : ClapTrap(name_userdef)
{
	hit_points = 100; 
	attack_damage = 20; 
	energy_points = 50;
	std::cout <<"ScavTrap " << name << " is ready to serve\n";
}	

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		hit_points = other.hit_points;
		attack_damage = other.attack_damage;
		energy_points = other.energy_points;
	}
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "Copy constructor for ScavTrap has been called" << "\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << COLOR_GREEN << " Default desctructor for ScavTrap has been invoked \n" << RESET;
}

void ScavTrap::guardGate()
{
	std::cout << COLOR_RED << "ScavTrap now is in gate keeper mode\n" << RESET;
}