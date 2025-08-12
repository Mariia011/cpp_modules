#include "MutantStack.hpp"

template class MutantStack<int>;
template class MutantStack<std::string>;

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(): std::stack<T, Container>() {}

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& other) : std::stack<T, Container>(other) {}

template<typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack& other)
{
    if (this != &other)
    {
        std::stack<T, Container>::operator=(other);
    }
    return *this;
}

template<typename T, typename Container>
MutantStack<T, Container>::~MutantStack() {}