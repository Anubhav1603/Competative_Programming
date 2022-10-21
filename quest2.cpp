// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    // Write C++ code here
    int i, sum = 0;
    int term = 2;
    for (i = 1; i <= 10; i++)
    {
        cout << term << ",";
        sum += term;
        term *= 3;
    }
    cout << "\nThe sum is " << sum;

    return 0;
}