#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if ((n % i) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    bool ans = isPrime(n);
    if (ans == true)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Non-Prime Number" << endl;
    }
}