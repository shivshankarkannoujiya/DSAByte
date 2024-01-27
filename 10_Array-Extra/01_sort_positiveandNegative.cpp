#include <iostream>
using namespace std;
void shiftPositiveNegative(int arr[], int size)
{
    int j = 0;
    for (int index = 0; index < size; index++)
    {
        if (arr[index] < 0)
        {
            swap(arr[index], arr[j]);
            j++;
        }
    }
}

// using while loop
// void shiftPositiveNegative(int arr[], int size)
// {
//     int j = 0;
//     int index = 0;
//     while (index < 0)
//     {
//         swap(arr[index], arr[j]);
//         j++;
//     }
//     index++;
// }

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {23, -7, 12, -10, -11, 40, 60};
    int size = 7;

    cout << "Printing before shifting : " << endl;
    printArray(arr, size);
    cout << "printing after shifting : " << endl;
    shiftPositiveNegative(arr, size);
    printArray(arr, size);
}