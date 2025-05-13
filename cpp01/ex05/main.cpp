#include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("ERROR");
	harl.complain("safdsd");
	harl.complain("ERROR");
	harl.complain("INFO");
	harl.complain("INCORRECT INPUT");
	harl.complain("SOMETHING");
	harl.complain("INFO");
	harl.complain("INFO");
	return 0;
}