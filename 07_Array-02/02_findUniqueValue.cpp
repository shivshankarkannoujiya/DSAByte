#include <iostream>
using namespace std;

int getUniqueElement(int arr[], int size)
{

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {2, 10, 13, 10, 2, 11, 15, 15, 13};
    int size = 9;

    // calling function
    int finalAns = getUniqueElement(arr, size);
    cout << "Unique Element is : " << finalAns << endl;
}