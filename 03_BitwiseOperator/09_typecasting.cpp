#include <iostream>
using namespace std;

int main()
{
    // Explicit Type casting
    /*
     * Manual type conversion
     * Use the casting operator : () : containing target datatype
     */

    // Ex:-1
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + (int)num2;
    // cout << "Ans is : " << result << endl;

    // Ex:-2 double --> int
    double pi = 3.14159265;
    int IntegerPi = (int)pi;
    // cout << "Ans is : " << IntegerPi << endl;

    // E:-3 float --> char
    float floatingNumber = 65.35;
    char charValue = (char)floatingNumber;
    // cout << "Ans is : " << charValue << endl;

    // !important
    /*
     * int/int --> int
     * int/float --> float
     * float/int --> float
     */

    int n1 = 10;
    int n2 = 3.0;
    float c = n1 / n2;
    float d = n1 / ((float)n2);
    float e = ((float)n1) / n1;
    cout << c << endl; // 3
    cout << d << endl; // 3.333
    cout << e << endl; // 3
}