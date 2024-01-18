#include <iostream>
using namespace std;

// Return sum of 3 Num

int returnSum(int a, int b, int c)
{
    return a + b + b;
}

// Print sum of 3 Num
void printSum(int a, int b, int c)
{
    int sum = a + b + c;
    cout << "Sum is : " << sum << endl;
}

int main()
{
    // Calling function
    int Result = returnSum(1, 2, 3);
    cout << "Ans is : " << Result << endl;

    // Calling function
    printSum(1, 2, 3);
}