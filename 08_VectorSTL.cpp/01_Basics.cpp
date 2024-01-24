#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    // static memory Allocation
    // int arr[5] = {1,2,3,4,5};

    // Dynamic array
    // !Dynamic memory allocation [M-1]
    int size;
    cout << "Enter size : ";
    cin >> size;
    // int arr[size];

    // !Dynamic memory allocation[M-2]
    int *arr = new int[size];

    // Takiing input
    for (int i = 0; i < size; i++)
    {
        int data;
        cin >> data;
        arr[i] = data;
    }

    printArray(arr, size);
}