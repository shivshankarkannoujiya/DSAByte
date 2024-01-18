#include <iostream>
using namespace std;

int findFactorial(int n)
{
    long long int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    long long int Ans = findFactorial(n);
    cout << "Factorial is : " << Ans << endl;
}