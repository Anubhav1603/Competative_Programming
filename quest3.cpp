// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    // Write C++ code here
    int i, sum = 0;
    int odd = 5;
    int even = 10;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << even << ",";
            even *= 2;
        }
        else
        {
            cout << odd << ",";
            odd += 7;
        }
    }

    return 0;
}