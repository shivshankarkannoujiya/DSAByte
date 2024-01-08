#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a : ";
    cin >> a;
    int b;
    cout << "Enter b : ";
    cin >> b;

    // And (&)
    cout << "Ans < & > is : " << (a & b) << endl;

    // OR (|)
    cout << "Ans < | > is : " << (a | b) << endl;

    // Not (~)
    cout << "Ans < ~ > is : " << (~a) << endl;
    cout << "Ans < ~ > is : " << ~a << endl;
    cout << "Ans < ~ > is : " << ~(a) << endl;

    // XOR(^)
    cout << "Ans < ~ > is : " << (a ^ b) << endl;
}