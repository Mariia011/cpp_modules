#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor for FragTrap has been called" << "\n";
}

FragTrap::FragTrap(const std::string&)
{

}

FragTrap::FragTrap(FragTrap&)
{

}

FragTrap& FragTrap::operator=(const FragTrap&)
{
	return *this;
}

FragTrap::~FragTrap()
{

}