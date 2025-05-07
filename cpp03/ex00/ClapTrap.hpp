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

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(std::string);
		ClapTrap(ClapTrap&);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap&); //copy assignement operator 
	private:

		std::string name;
		int hit_points = 10; 
		int attack_damage = 0; 
		int energy_points = 10; 
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	public:
		std::string name_getter();

};

#endif