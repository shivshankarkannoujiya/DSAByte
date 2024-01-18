#include <iostream>
using namespace std;

// fn-declaration
int addNumbers(int a, int b);

int main()
{
    // fn-call
    int result = addNumbers(1, 2);
    cout << "Ans is : " << result << endl;
}

// fn-definition
int addNumbers(int a, int b)
{

    int sum = a + b;
    return sum;
}