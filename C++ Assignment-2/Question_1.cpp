// Q.1 define a function to check whether a given is a prime or not.

#include <iostream>
using namespace std;

class primenumber
{
public:
    int n;

    void checkprimenumber()
    {
        int flag = 0;
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << "The number is Prime" << endl;
        else
            cout << "The number is Not Prime" << endl;
    }
};
int main()
{
    primenumber a;
    cout << "Enter a number" << endl;
    cin >> a.n;

    a.checkprimenumber();

    return 0;
}