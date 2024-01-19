#include <iostream>
using namespace std;

// function to print array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// function : linear search
bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            // found
            return true;
        }
    }
    // not found
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 5;

    // calling function
    // printArray(arr, size);

    // calling function :
    bool ans = linearSearch(arr, size, target);
    if (ans == true)
    {
        cout << "Target found" << endl;
    }
    else
    {
        cout << "Target not found" << endl;
    }
}