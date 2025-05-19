#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ClapTrap;

class ScavTrap : public  ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string&);
		ScavTrap(const ScavTrap& other); 
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap();
	public:
		void guardGate();
};

#endif