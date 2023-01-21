// Q.6 define a funtion to swap data of two int variables using call by refenece.

/*#include <iostream>
using namespace std;

void swap(int *l, int *r) // call by address
{
    int temp = *l;
    *l = *r;
    *r = temp;
}

// int *l = &p;  pointer variable
// int &q = p;  reference variable

int main()
{
    int p = 10, q = 20;

    swap(&p, &q);
    cout << "After swap: p = " << p << " and q = " << q << endl;
    return 0;
}
*/
// Define a function to swap data of two int variables using call by reference

#include <iostream>
using namespace std;
void swap(int &x, int &y);
int main()
{
    int a = 10, b = 20;
    cout << "Before swap: a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "After swap: a = " << a << " b = " << b << endl;
    return 0;
}
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}