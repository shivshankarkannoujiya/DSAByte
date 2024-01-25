#include <iostream>
#include <vector>

using namespace std;

// printing using for-each loop
void print(vector<int> v)
{
    cout << "Printing vector : ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    vector<char> v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');

    // !printing first and last element
    // first
    cout << "First : " << v[0] << endl;
    cout << "First : " << v.front() << endl;

    // last
    cout << "last : " << v[v.size() - 1] << endl;
    cout << "last : " << v.back() << endl;

    vector<int> arr = {1, 2, 3, 4, 5};

    // calling function
    print(arr);
}