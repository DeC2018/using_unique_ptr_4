#include <iostream>
#include <memory>

int main()
{
    auto ptr { std::make_unique<int>(123) };

    // free up memory and delete object 123
    ptr.reset();
    if(!ptr)   // if ptr
    {
        std::cout << "Memory is free" << std::endl;
    }
    else
    {
        std::cout << *ptr << std::endl;
    }
}
