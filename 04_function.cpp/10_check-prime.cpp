#include <iostream>
using namespace std;

bool isPrime(int n)
{
    // base case
    if (n == 2)
    {
        return 1;
    }

    for (int i = 2; i <= n; i++)
    {
        if (n % i != 0)
        {
            return 1;
        }
        return 0;
    }
}

int main()
{
    bool ans = isPrime(2);
    if (ans == 1)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not a Prime Number" << endl;
    }
}