#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    int sign = 1;
    int i;
    for (i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << sign * count << " ";
            sign = (-1) * sign;
            count++;
        }
        cout << endl;
    }
}