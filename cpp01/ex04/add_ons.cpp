#include "header.hpp"

bool check_argc(int argc, char**argv)
{
    if(argc != ARG_COUNT)
    {
        std::cerr << "Try again: " << argv[0] << " <filename> <s1> <s2>\n";
        return 0;
    }
    return 1;
}

void bad_error(std::ifstream &ifs)
{
    std::cout << "File" << ifs << "haven't been opened" << std::endl;
    exit(1);
}

std::string rename_file(const std::string& old_file) 
{
    return old_file + ".replacement";
}
