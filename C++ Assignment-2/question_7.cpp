

// Write a function using the default argument that is able to add 2 or 3 numbers.

#include <iostream>
using namespace std;
int add(int x, int y, int z = 0)
{
    return x + y + z;
}

int main()
{
    cout << "Sum of 2 numbers: " << add(2, 3) << endl;
    cout << "Sum of 3 numbers: " << add(1, 2, 3) << endl;
    return 0;
}