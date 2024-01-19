#include <iostream>
using namespace std;

int main()
{
    // !print sum of arrays elements
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element at " << i << ":";
        cin >> arr[i];
    }

    // printing sum
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << "totalSum : " << sum << endl;
}