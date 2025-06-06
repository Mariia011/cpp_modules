#include "Base.hpp"

using namespace std;
Base* createA(){return new A();}
Base* createB(){return new B();}
Base* createC(){return new C();}

Base* generate(void)
{
    typedef Base *(*bases_ptr)();
    bases_ptr arr[] = {createA, createB, createC};

    int index = rand() % 3;
    return arr[index]();
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        cout << "the object is of type A\n";
        return ; 
    }
    catch(const std::bad_cast){}
    try
    {
        (void)dynamic_cast<B&>(p);
        cout << "the object is of type B\n";
        return ;
    }
    catch(const std::bad_cast){}
    try
    {
        (void)dynamic_cast<C&>(p);
        cout << "the object is of type C\n";
        return ;
    }
    catch(const std::bad_cast){}
}

void identify(Base* p)
{
    if(dynamic_cast<A*>(p) != NULL)
        cout << "A\n";
    else if (dynamic_cast<B*>(p) != NULL)
        cout << "B\n";
    else if (dynamic_cast<C*>(p) != NULL)
        cout << "C\n";
    else 
        cout << "ERROR! NO SUCH TYPE\n";
}

int main()
{
    cout << "Testing ptr 'identify' func!\n";
    for (int i = 0; i < 4; i++)
    {
        Base *test;
        test = generate();
        cout << "The type of instance is ";
        identify(test);
        delete test;
    } 
    cout << "Testing reference 'identify' function now!\n";
    
    A obj_a;
    B obj_b;
    C obj_c;
    identify(obj_a);
    identify(obj_b);
    identify(obj_c);

    return 0;
}