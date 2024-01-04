#include <iostream>
using namespace std;

int main()
{

    // declaration
    int num;
    cout << "value : " << num << endl; // print garbage value

    // intialization
    int Num = 10;
    cout << "value : " << Num << endl;

    // check size of dataTypes
    cout << "size : " << sizeof(Num) << endl;

    // Char
    char ch = 'a';
    cout << "value : " << ch << endl;
    cout << "size : " << sizeof(ch) << endl;

    // float
    float point = 1.6;
    cout << "value : " << point << endl;
    cout << "size : " << sizeof(point) << endl;

    // long
    long ll = 123;
    cout << "value : " << ll << endl;
    cout << "size : " << sizeof(ll) << endl;
}