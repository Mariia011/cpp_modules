#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    public:
        Brain();
        Brain(const Brain&);
        Brain& operator=(const Brain&);
        ~Brain();
    private:
        std::string ideas[100];
    public: 
        void setIdea(const std::string&, const int);
        std::string getIdea(const int);
};

#endif