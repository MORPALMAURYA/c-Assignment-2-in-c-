// Q.10 Write functions using function overloading to add two numbers having different data types.

#include <iostream>

int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}

int main()
{
    std::cout << add(1, 2) << std::endl;
    std::cout << add(1.5, 2.5) << std::endl;
    return 0;
}
