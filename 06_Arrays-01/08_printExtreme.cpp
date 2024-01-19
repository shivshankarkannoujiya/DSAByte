#include <iostream>
using namespace std;

void printExtreme(int arr[], int size)
{

    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        // to handle odd cases
        if (left == right)
        {
            // print only one : [left or right]
            cout << arr[left] << " ";
        }
        cout << arr[left] << " ";
        cout << arr[right] << " ";
        left++;
        right--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;

    // calling function
    printExtreme(arr, size);
}