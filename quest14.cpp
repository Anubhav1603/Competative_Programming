// Find maximum number of an array

#include <iostream>
using namespace std;

int max(int arr[], int size)
{
    int maximum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    return maximum;
}

int main()
{
    int a[5] = {10, 12, 15, -9, 3};
    cout << max(a, 5);
}