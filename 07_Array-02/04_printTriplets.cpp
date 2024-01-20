#include <iostream>
using namespace std;

void printAllTriiplets(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "For i : " << i << endl;
        for (int j = 0; j < size; j++)
        {
            cout << "j : " << j << endl;
            for (int k = 0; k < size; k++)
            {
                cout << "k: " << k << " ";
                cout << "{" << arr[i] << "," << arr[j] << "," << arr[k] << "}"<<endl;
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 3;

    // calling function
    printAllTriiplets(arr, size);
}