/*. Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle*/

#include <iostream>
#include <cmath>
using namespace std;

double area(double radius)
{
    return M_PI * pow(radius, 2);
}

double area(double length, double width)
{
    return length * width;
}

double area(double base, double height, bool is_triangle)
{
    if (is_triangle)
    {
        return 0.5 * base * height;
    }
    else
    {
        return base * height;
    }
}

int main()
{
    cout << "Area of Circle : " << area(5) << endl;
    cout << "Area of Rectangle : " << area(10, 5) << endl;
    cout << "Area of Triangle : " << area(10, 5, true) << endl;
    return 0;
}
