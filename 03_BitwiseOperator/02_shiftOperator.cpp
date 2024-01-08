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
}