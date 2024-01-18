#include <iostream>
using namespace std;

void printA()
{

    cout << "Inside Fn-A" << endl;
    cout << "Going back to Fn-main" << endl;
}
int main()
{

    cout << "Inside Fn-main" << endl;
    printA();
    cout << "Back to Fn-main" << endl;
    return 0;
}