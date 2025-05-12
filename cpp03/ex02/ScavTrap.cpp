
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
	std::cout << TextColor::BRIGHT_YELLOW <<"ScavTrap " << name << " is ready to serve\n" << TextColor::RESET;
}	

ScavTrap::ScavTrap(ScavTrap& other) 
{
	std::cout << "Copy constructor for ScavTrap has been called" << "\n";
	if(this == &other)
	return;
	name = other.name_getter();
	hit_points = other.hit_points;
	energy_points = other.energy_points;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "Copy assignment operator for ScavTrap called" << "\n";
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << TextColor::BRIGHT_CYAN << " Default desctructor for ScavTrap has been invoked \n" << TextColor::RESET;
}



void ScavTrap::guardGate()
{
	std::cout << TextColor::BRIGHT_CYAN << "ScavTrap now is in gate keeper mode\n" << TextColor::RESET;
}