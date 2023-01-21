// Q.3 define a funtion to calculate x raised to the power y.

#include <iostream>
using namespace std;

class raisepower
{
public:
    int x, y;

    void xpower()
    {
        int result = 1;
        while (y != 0)
        {
            y--;
            result = result * x;
        }

        cout << "x power y is " << result << endl;
    }
};

int main()
{
    raisepower a;
    cout << " Enter Two number " << endl;
    cin >> a.x >> a.y;

    a.xpower();

    return 0;
}
