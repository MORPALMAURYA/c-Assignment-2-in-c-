
// Q.5 define a funtion to check whether a given number is a term in a fibanacci series or not.

#include <iostream>
using namespace std;
bool isFibonacci(int n);
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isFibonacci(num))
    {
        cout << num << " is a term in the Fibonacci series." << endl;
    }
    else
    {
        cout << num << " is not a term in the Fibonacci series." << endl;
    }
    return 0;
}
bool isFibonacci(int n)
{
    int a = 0, b = 1, c = 0;

    while (c < n)
    {
        c = a + b;
        a = b;
        b = c;

        if (c == n)
        {
            return true;
        }
    }

    return false;
}
