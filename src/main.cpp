
#include "Test.hpp"
#include <iostream>

int main()
{
    auto x = Math::add(4,10);
    auto y = Math::square(10);
    std::cout << "The result of add : 4 + 10 = " << x << std::endl;
    std::cout << " The result square: 10^2  = " << y << std::endl;
    return 0;
}