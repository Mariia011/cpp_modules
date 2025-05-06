#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <fstream>
#include <string>

#define ARG_COUNT 4

void bad_error(std::ifstream &ifs);
bool check_argc(int argc, char**argv);
std::string rename_file(const std::string& old_file);

#endif