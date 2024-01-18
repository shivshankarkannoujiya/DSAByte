#include <iostream>
using namespace std;

bool isEven(int n)
{
    if ((n & 1) == 0)
    {
        return 1;
    }
    else
    {

        return 0;
    }
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    bool ans = isEven(n);
    if (ans == 1)
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }
}