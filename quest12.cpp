#include <iostream>
using namespace std;

int main()
{
    int count = 10;
    int sign = 1;
    for (int i = 4; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            {
                cout << sign * count << " ";
                sign = (-1) * sign;
                count++;
            }
        }
        cout << endl;
    }
}