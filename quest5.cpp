#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, coeff = 1, term, x, sum = 1;
    x = 3;
    term = x;
    for (i = 1; i <= 10; i++)
    {
        sum += term;
        coeff++;
        term = coeff * pow(x, i + 1);
    }
    cout << sum;
    return 0;
}