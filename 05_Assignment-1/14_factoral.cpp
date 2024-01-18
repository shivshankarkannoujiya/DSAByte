#include <iostream>
using namespace std;

int findFactorial(int n)
{
    int factorial = 1;
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

    int Ans = findFactorial(n);
    cout << "Factorial is : " << Ans << endl;
}