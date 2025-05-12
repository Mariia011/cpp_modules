#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

enum class TextColor{
	RESET = 0,
    BRIGHT_RED= 91,
    BRIGHT_GREEN= 92,
    BRIGHT_YELLOW= 93,
    BRIGHT_BLUE= 94,
    BRIGHT_MAGENTA= 95,
    BRIGHT_CYAN= 96,
};

std::ostream& operator<<(std::ostream& ofstream, TextColor color);

class ClapTrap
{
	private:
	public:
		ClapTrap();
		ClapTrap(const std::string&);
		ClapTrap(ClapTrap&);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap&); //copy assignement operator 
	protected:
		std::string name;
		int hit_points; 
		int attack_damage; 
		int energy_points; 
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	public:
		std::string name_getter();
};

#endif