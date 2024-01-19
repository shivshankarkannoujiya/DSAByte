#include <iostream>
#include <limits.h>
using namespace std;

int getMin(int arr[], int size)
{

    int minValue = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minValue)
        {
            // update minValue
            minValue = arr[i];
        }
    }

    // return minValue
    return minValue;
}

// using Predefined function
int getMinValue(int arr[], int size)
{
    int minValue = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        minValue = min(arr[i], minValue);
    }
    return minValue;
}
int main()
{
    int arr[] = {1, 3, 6, 3, 9, 90, 12};
    int size = 7;

    // Calling function
    int minValue = getMin(arr, size);
    cout << "Minimum value is : " << minValue << endl;

    // calling another function
    int min = getMinValue(arr, size);
    cout << "Min value is : " << min << endl;
}