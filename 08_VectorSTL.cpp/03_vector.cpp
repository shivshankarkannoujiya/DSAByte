#include <iostream>
#include <vector>

using namespace std;

// !function to print
void print(vector<int> v)
{
    cout << "Printing : ";
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;

    // !taking input
    int n;
    cout << "Enter item wants to take input : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter data : ";
        cin >> data;
        v.push_back(data);
    }

    // printing
    print(v);

    // !Clear vector
    v.clear();
    print(v);
    cout << "vector cleared .....";
}