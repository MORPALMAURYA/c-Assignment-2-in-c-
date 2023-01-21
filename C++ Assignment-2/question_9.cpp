/* Write functions using function overloading to find a maximum of two numbers and both
the numbers can be integer or real.*/

#include <iostream>
using namespace std;

int max(int a, int b);

double max(double a, double b);

int main()
{
    cout << "Maximum of two integers : " << max(10, 20) << endl;
    cout << "Maximum of two real numbers : " << max(1.5, 2.3) << endl;
    return 0;
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}

double max(double a, double b)
{
    return (a > b) ? a : b;
}