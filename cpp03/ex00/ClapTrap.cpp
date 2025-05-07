#include "ClapTrap.hpp"

std::ostream& operator<<(std::ostream& ofstream, TextColor color) 
{
        return ofstream << "\033[" << static_cast<int>(color) << "m";
}

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor has been called" << "\n";
}

ClapTrap::ClapTrap(std::string userdef_name)
{
	this->name = userdef_name;
	std::cout << "Parametric constructor for " << name << " has been called" << "\n";
}

ClapTrap::ClapTrap(ClapTrap& other) //copy constructor 
{
	std::cout << "Copy constructor has been called" << "\n";
	if(this == &other)
	return;
	name = other.name_getter();
	hit_points = other.hit_points;
	energy_points = other.energy_points;
	std::cout << &other << std::endl;
	std::cout << this << "\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called" << "\n";
	
	// std::cout << &other << std::endl;
	// std::cout << this << "\n";
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor for " << name << " has been called" << "\n";
}

// public member functions

void ClapTrap::attack(const std::string& target)
{
	if(energy_points < 1)
		std::cout << TextColor::BRIGHT_GREEN << " ClapTrap" << name << " cannot attacks because his energy points is" << energy_points << "!\n" << TextColor::RESET;	
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
		std::cout << TextColor::BRIGHT_MAGENTA << "ClapTrap " << name << " is dead\n" << TextColor::RESET;
		return;
	}
	std::cout << "ClapTrap " << name << " was damaged by " << amount << " points!\n";	
	hit_points -= amount;
	attack_damage += amount;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(hit_points < 10)
	{
		--energy_points;
		hit_points += amount;
		std::cout << TextColor::BRIGHT_GREEN << "ClapTrap " << this->name << " was repaired by " << amount << " hit points! \n" << TextColor::RESET;	
	}
	else
		std::cout << TextColor::BRIGHT_YELLOW << "---No need for repair, ClapStrap--- " << name << " already has "<< hit_points<< " points!\n" << TextColor::RESET ;
}

std::string ClapTrap::name_getter()
{
	return name;
}