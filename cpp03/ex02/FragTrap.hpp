#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

std::ostream& operator<<(std::ostream& ofstream, TextColor color);

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string&);
		FragTrap(FragTrap&);
		~FragTrap();
		FragTrap& operator=(const FragTrap&);
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	public:
		std::string name_getter();
};

#endif