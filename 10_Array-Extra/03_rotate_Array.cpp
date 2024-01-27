#include <iostream>
#include <vector>

using namespace std;

void roatateByK(vector<int> &arr, int k)
{

    int n = arr.size();
    vector<int> ans(n);
    for (int index = 0; index < n; index++)
    {
        int newIndex = ((index + k) % n);
        ans[newIndex] = arr[index];
    }
    arr = ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int k;
    cout << "Enter k : ";
    cin >> k;

    // calling function
    roatateByK(arr, k);

    // printing array
    for (auto it : arr)
    {
        cout << it << " ";
    }
}