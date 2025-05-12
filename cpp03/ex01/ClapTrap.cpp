#include "ClapTrap.hpp"

std::ostream& operator<<(std::ostream& ofstream, TextColor color) 
{
        return ofstream << "\033[" << static_cast<int>(color) << "m";
}

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor for ClapTrap has been called" << "\n";
}

ClapTrap::ClapTrap(const std::string& userdef_name)
{
	this->name = userdef_name;
	std::cout << "Parametric constructor for ClapTrap" << name << " has been called" << "\n";
}

ClapTrap::ClapTrap(ClapTrap& other) //copy constructor 
{
	std::cout << "Copy constructor for ClapTrap has been called" << "\n";
	if(this == &other)
	return;
	name = other.name_getter();
	hit_points = other.hit_points;
	energy_points = other.energy_points;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called" << "\n";
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor for ClapTrap " << name << " has been called" << "\n";
}

// public member functions

void ClapTrap::attack(const std::string& target)
{
	if(energy_points < 1)
		std::cout << TextColor::BRIGHT_GREEN << "ClapTrap" << name << " cannot attacks because has no energy points\n"<< TextColor::RESET;	
	else 
	{
		std::cout << TextColor::BRIGHT_RED << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " point of damage!\n" << TextColor::RESET;	
		--energy_points;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(amount > energy_points)
	{
		std::cout << TextColor::BRIGHT_MAGENTA << name << " is dead\n" << TextColor::RESET;
		return;
	}
	std::cout << name << " was damaged by " << amount << " points!\n";	
	hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(energy_points > 1)
	{
		--energy_points;
		hit_points += amount;
		std::cout << TextColor::BRIGHT_GREEN << "ClapTrap " << this->name << " was repaired by " << amount << " hit points! \n" << TextColor::RESET;	
	}
	else
		std::cout << TextColor::BRIGHT_YELLOW << "---Error: Cannot repair ClapTrap---\n " << name << " has no energy to repair\n"<< TextColor::RESET ;
}

std::string ClapTrap::name_getter()
{
	return name;
}