#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a : ";
    cin >> a;
    int shiftBy;
    cout << "Enter shift-By : ";
    cin >> shiftBy;

    // left-shift operator
    cout << "Ans ( << ) is : " << (a << 1) << endl;

    // right-shift operator
    cout << "Ans ( >> ) is : " << (a >> 1) << endl;

    // signed case : compiler handle thhis case
    int n = -100;
    cout << (n >> 1) << endl; //-50

    // in case of unsigned : giving +ve large number
    unsigned int num = -100;
    cout << (num >> 1) << endl; // 2147483598

    // shift count : -ve
    // WARNING : shift count can not be -ve
    // PRINT : Garbage value
    cout << (a >> -1) << endl;
}