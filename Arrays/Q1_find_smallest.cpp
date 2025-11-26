#include <iostream>
#include <climits>
using namespace std;

int findSmallest(int arr[], int n)
{
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main()
{
    int arr[5] = {11, 3, 55, 66, -7};
    int n = 5;

    cout << findSmallest(arr, n) << endl;
}