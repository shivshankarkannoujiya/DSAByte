#include <iostream>
using namespace std;

int main()
{
    // Q-1
    /*
     * Create array of size = 10
     * take user input
     * double-up each value of array
     * print the array
     */

    int arr[10];
    // taking input
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter value at index " << i << " : ";
        cin >> arr[i];
    }

    // doubling
    for (int i = 0; i < 10; i++)
    {
        arr[i] *= 2;
    }

    // printing
    cout << "Printing Array after doubling Elements : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    
}