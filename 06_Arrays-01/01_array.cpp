#include <iostream>
using namespace std;

int main()
{

    // !Array Creation
    // int arr[101];
    // char ch[102];
    // bool flags[223];
    // long num[900];
    // short snum[1000];

    // !checking Address  : &varname
    // int a = 5;
    // cout << "Address is : " << &a << endl;

    // int arr[10];
    // cout << "Address is : " << &arr << endl;
    // cout << "Address is : " << arr << endl;

    // !printing size
    // cout<<"Size of a : "<<sizeof(a)<<endl;
    // cout<<"Size of arr : "<<sizeof(arr)<<endl;

    // !Array Initialization
    // int arr[] = {1, 2, 3, 4, 5};
    // int brr[5] = {1, 2, 3, 4, 5};
    // int crr[5] = {1, 2};
    // int drr[5] = {1, 2, 3, 4, 5, 6, 7}; //! Error :[ elements>array_capacity]

    // !Accessing Elments : Indexing
    // int arr[] = {1, 2, 3, 4, 5};

    //  0 1 2 3 4  : Index
    // [1,2,3,4,5]

    // cout << "Value is : " << arr[0] << endl;
    // cout << "Value is : " << arr[1] << endl;
    // cout << "Value is : " << arr[2] << endl;
    // cout << "Value is : " << arr[3] << endl;
    // cout << "Value is : " << arr[4] << endl;

    // !Accessing using : loop
    // int size = 5;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // !Taking input in array
    int arr[5];
    int n = 5;
    // cin >> arr[0];
    // cin >> arr[1];
    // cin >> arr[2];
    // cin >> arr[3];
    // cin >> arr[4];

    // using loop
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value at index " << i << " : ";
        cin >> arr[i];
    }

    // printing array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}