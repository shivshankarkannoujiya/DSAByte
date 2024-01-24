#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // !vector initialization
    vector<int> v;
    vector<int> arr(5, 1);
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2{1, 2, 3, 4, 5};

    // ! How to copy vector
    vector<int> arr3 = {1, 2, 3, 4, 5};
    vector<int> arr4(arr3);
    print(arr4);
}