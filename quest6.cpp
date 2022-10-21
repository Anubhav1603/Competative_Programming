#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, coeff = 1, term, x, sum = 0;
    x = 2;
    term = x;
    for (i = 1; i <= 6; i++)
    {
        sum += term;
        coeff += 2;
        term = coeff * pow(x, i);
    }
    cout << sum;
    return 0;
}