#include <iostream>
using namespace std;

int isEven(int num)
{

    if (num % 2 == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    // fn-call
    bool ans = isEven(10);
    if (ans == 1)
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }
}