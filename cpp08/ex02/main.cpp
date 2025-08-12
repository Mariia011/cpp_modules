#include "MutantStack.hpp"

int main()
{
    // vector 
    std::cout << "Mutant stack with vector:\n";
    MutantStack<int, std::vector<int> > stackVector;
    stackVector.push(1);
    stackVector.push(2);
    std::cout << "Top with vector: " << stackVector.top() << std::endl;

    //list
    std::cout << std::endl << "Mutant stack with list:\n";
    MutantStack<int, std::list<int> > stackList;
    stackList.push(1);
    stackList.push(2);
    std::cout << "Top with list: " << stackList.top() << std::endl;
    
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << "Top element: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;


    mstack.push(12);
    mstack.push(33);
    mstack.push(434);
    mstack.push(90);

    std::cout << "Iterating through stack:" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "Reverse iteration:" << std::endl;
    for (MutantStack<int>::reverse_iterator r_it = mstack.rbegin();
         r_it != mstack.rend(); ++r_it)
    {
        std::cout << *r_it << std::endl;
    }
    std::stack<int> s(mstack);
    return 0;
}