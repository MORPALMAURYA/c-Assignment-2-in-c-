// Q.2 define a funtion to find highest value digit in a given number.

#include <iostream>
using namespace std;

class largestnumber
{
public:
    int n;

    void findMaxdigit()
    {
        int max = -1;

        while (n != 0)
        {
            int rem = n % 10;
            if (rem > max)
                max = rem;
            n = n / 10;
        }
        cout << "Max digit is=" << max << endl;
    }
};

int main()
{
    largestnumber a;
    cout << "Enter a number " << endl;
    cin >> a.n;

    a.findMaxdigit();

    return 0;
}