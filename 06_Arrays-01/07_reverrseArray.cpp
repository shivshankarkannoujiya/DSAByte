#include <iostream>
using namespace std;

void arrayReverse(int arr[], int size)
{

    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    // printing Array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 6;

    // Calling function
    arrayReverse(arr, size);
}