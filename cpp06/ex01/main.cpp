#include "Serializer.hpp"

int main()
{
    Data original;

    uintptr_t raw = Serializer::serialize(&original);
    Data* copy = Serializer::deserialize(raw);

    std::cout << "Original pointer: " << &original << "\n";
    cout << "Deserialized pointer: " << copy << "\n";
    return 0;
}