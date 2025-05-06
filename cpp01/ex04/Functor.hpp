#ifndef FUNCTOR_HPP
#define FUNCTOR_HPP

#include "header.hpp"

class Functor
{
	public: 
		std::ifstream& infile;
    	std::ofstream& outfile;
	public:
		Functor(std::ifstream& ifs, std::ofstream& ofs);
		~Functor();
	public:
		void metamorphosis();
		void 
};

#endif //functor