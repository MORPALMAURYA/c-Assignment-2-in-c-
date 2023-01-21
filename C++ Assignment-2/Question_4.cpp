// Q.4 define a funtion to pascal triangle up to N lines .

#include <iostream>
using namespace std;

void printPascalTriangle(int N);
int main()
{
    int N;
    cout << "Enter number of lines:" << endl;
    cin >> N;
    printPascalTriangle(N);
    return 0;
}
void printPascalTriangle(int N)
{
    for (int line = 0; line < N; line++)
    {
        int C = 1;
        for (int i = 0; i <= line; i++)
        {
            cout << C << " ";
            C = C * (line - i) / (i + 1);
        }
        cout << std::endl;
    }
}
