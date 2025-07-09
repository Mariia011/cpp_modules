#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
// #include <deque>  

template<typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
public:
    using typename std::stack<T, Container>::container_type;
    using iterator = typename container_type::iterator;
    using const_iterator = typename container_type::const_iterator;
    using reverse_iterator = typename container_type::reverse_iterator;
    using const_reverse_iterator = typename container_type::const_reverse_iterator;

    MutantStack() = default;
    MutantStack(const MutantStack& other) = default;
    MutantStack& operator=(const MutantStack& other) = default;
    ~MutantStack() = default;

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }

    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }

    reverse_iterator rbegin() { return this->c.rbegin(); }
    reverse_iterator rend() { return this->c.rend(); }

    const_reverse_iterator rbegin() const { return this->c.rbegin(); }
    const_reverse_iterator rend() const { return this->c.rend(); }
};

#endif
