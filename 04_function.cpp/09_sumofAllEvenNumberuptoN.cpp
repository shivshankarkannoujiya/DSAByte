#include <iostream>
using namespace std;

int sumOfAllEvenNumUptoN(int n)
{

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

// without using conditional statement
// int sumOfEvenNumUptoN(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i = i + 2)
//     {
//         sum += i;
//     }

//     return sum;
// }

int main()
{
    // fn-call
    int ans = sumOfAllEvenNumUptoN(3);
    cout << "Ans is : " << ans << endl;

    // int result = sumOfEvenNumUptoN(3);
    // cout << "Ans is : " << result << endl;
}