#include "iter.hpp"
using namespace std;

template<typename T>
void someFunc(T &data)
{   
    std::cout << data << ' ';
}

int main()
{
    int arr[] = {3, 4, 6, 2, 65};
    char c_arr[] = {'m', 'e', 'o', 'w'};
    float f_arr[] = {6.0005, 8.543, 543.5};
    ::iter(arr, 5, someFunc);
    cout << endl;
    ::iter(c_arr, 4, someFunc);
    cout << endl;
    ::iter(f_arr, 3, someFunc);

}