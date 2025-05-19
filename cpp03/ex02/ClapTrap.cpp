#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Deafult"), hit_points(10), attack_damage(0), energy_points(10)
{
	std::cout << "Default constructor for ClapTrap has been called" << "\n";
}

ClapTrap::ClapTrap(const std::string& userdef_name) : name(userdef_name), hit_points(10), attack_damage(0), energy_points(10)
{
	std::cout << "Parametric constructor for ClapTrap" << name << " has been called" << "\n";
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hit_points(other.hit_points), attack_damage(other.attack_damage), energy_points(other.energy_points)
{
	std::cout << "Copy constructor for ClapTrap has been called" << "\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		hit_points = other.hit_points;
		attack_damage = other.attack_damage;
		energy_points = other.energy_points;
	}
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
		std::cout << COLOR_GREEN << "ClapTrap" << name << " cannot attacks because has no energy points\n"<< RESET;	
	else 
	{
		std::cout << COLOR_RED << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " point of damage!\n" << RESET;	
		--energy_points;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (static_cast<int>(amount) >= hit_points)
	{
		std::cout << name << " is dead\n";
		hit_points = 0;
	}
	else
	{
		std::cout << name << " was damaged by " << amount << " points!\n";	
		hit_points -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(energy_points > 1)
	{
		--energy_points;
		hit_points += amount;
		std::cout << COLOR_GREEN << "ClapTrap " << this->name << " was repaired by " << amount << " hit points! \n" << RESET;	
	}
	else
		std::cout << COLOR_RED << "---Error: Cannot repair ClapTrap---\n " << name << " has no energy to repair\n"<< RESET ;
}

std::string ClapTrap::name_getter()
{
	return name;
}