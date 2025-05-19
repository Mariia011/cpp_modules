#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define COLOR_GREEN "\033[32m"
#define RESET "\033[0m"
#define COLOR_RED "\033[0;31m"

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(const std::string&);
		ClapTrap(const ClapTrap&);
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