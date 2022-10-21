#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = 1 - num;
        }
        cout << endl;
    }
}