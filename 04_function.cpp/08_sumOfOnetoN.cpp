#include <iostream>
using namespace std;

int findSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

// using formaula
int sumOfNnaturalNum(int n)
{
    int sum = (n * (n + 1) / 2);
    return sum;
}

int main()
{
    // fn-call
    int finalSum = findSum(3);
    cout << "Final sum is : " << finalSum << endl;

    // calling fn
    int result = sumOfNnaturalNum(3);
    cout << "Ans is : " << result << endl;
}