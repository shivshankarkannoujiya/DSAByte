#include <iostream>
using namespace std;

void printAllPairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "{" << arr[i] << "," << arr[j] << "}";
        }
        cout << endl;
    }
}

// V-2
void printPairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << "{" << arr[i] << "," << arr[j] << "}";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30};
    int size = 3;

    // calling function
    // printAllPairs(arr, size);

    // calling function
    printPairs(arr, size);
}