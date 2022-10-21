// Find max index of an array

#include <iostream>
using namespace std;

int maxindex(int arr[], int size)
{
    int maximum = arr[0],
        maxindex = 0, i;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
            maxindex = i;
        }
    }
    return maxindex;
}

int main()
{
    int a[5] = {10, 12, 15, -9, 3};
    cout << maxindex(a, 5);
}