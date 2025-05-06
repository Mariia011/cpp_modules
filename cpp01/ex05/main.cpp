#include "Harl.hpp"

int main()
{
	Harl harl;
	// std::string line;
	// while(1)
	// {
	// 	std::cout << "gri brats: ";
	// 	std::getline(std::cin, line);
	// 	harl.complain(line);
	// }
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("ERROR");
	return 0;
}