#include "Sed.hpp"

void validation(int argc, char **argv, std::ifstream &infile)
{
	if (argc != 4)
		throw std::invalid_argument("Invalid arguments");
	infile.open(argv[1]);
	if (!infile.is_open())
		throw std::invalid_argument(std::string("Can't open file ") + argv[1]);
}

int main(int argc, char **argv)
{
	std::ifstream infile;
	
    try {
		validation(argc, argv, infile);
	} catch (std::exception &message) 
    {
		std::cerr << message.what() << std::endl;
		return 1;
	}
	
    std::string new_file = std::string(argv[1]) + ".replace";
	std::ofstream outfile(new_file.c_str());

	Sed replacer = Sed(infile, outfile);
	replacer.replace(argv[2], argv[3]);
	infile.close();
	outfile.close();
	return 0;
}