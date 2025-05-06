#include "header.hpp"

int main(int argc, char **argv)
{
    if (!check_argc(argc, argv))
        return 0;
    
    std::string init_file = argv[1];
    std::string new_file = rename_file(argv[1]);
    std::cout << new_file << std::endl;
    
    std::ifstream ifs(init_file);
    std::ofstream ofs(new_file);
    
    std::string line;

    Functor functor(&ifs, &ofs);
    
    functor(argv[2], argv[3]);
    ifs.open();

    if(!ifs.is_open())
        ifs.bad_error();
    while (getline(ifs, line) && !ifs.eof())
    {
        if(line == argv[2])
            functor()
    }
    
        metamorphosis(ifs, ofs);
    return 0;
}