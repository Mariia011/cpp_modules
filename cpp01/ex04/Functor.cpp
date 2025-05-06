#include "Functor.hpp"

Functor::Functor(std::ifstream& ifs, std::ofstream& ofs) : infile(ifs), outfile(ofs){} 

Functor::~Functor(){}

void Functor::operator()(const string &to_replace, const string &replace_with)
{
	
}

