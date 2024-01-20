#include <iostream>
using namespace std;

// !Counting Approach
void sortZerosOnes(int arr[], int size)
{

    // !Step: 1 count zero's and one'
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }

    // !Step:2 place values
    // using for loop
    // int i;
    // for (i = 0; i < zeroCount; i++)
    // {
    //     arr[i] = 0;
    // }
    // for (int j = i; j < size; j++)
    // {
    //     arr[j] = 1;
    // }

    // using while loop
    int index = 0;
    while (zeroCount--)
    {
        arr[index] = 0;
        index++;
    }

    while (oneCount--)
    {
        arr[index] = 1;
        index++;
    }

    // Printing Array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// !Two pointer approach

void sortZerosOnesA2(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        if (arr[left] == 1 && arr[right] == 0)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        else if (arr[left] == 0 && arr[right] == 0)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    // prrinting arrray
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
    // int arr[] = {1, 1, 0, 1, 1, 0, 0, 0, 1, 0};
    int size = 9;
    // int size = 10;

    // calling fn
    // sortZerosOnes(arr, size);

    // Calling fn
    sortZerosOnesA2(arr, size);
}