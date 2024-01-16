#include <iostream>
using namespace std;

int main()
{

    // implicit TypeCasting :
    /*
     * Automatic type conversion
     * Smaller type data --> larger type Data
     */

    // Ex:- int --> float
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + num2;
    cout << "Ans is : " << result << endl;

    // E:-2 char --> int
    /*
     * 'A' === ASCII_value (65) + 1 = 66
     */
    char ch = 'A';
    int a = ch + 1;
    cout << "Ans is : " << a << endl;

    // Ex:3 int --> char
    int var = 97;
    char chh = var;
    cout << "Ans is : " << chh << endl;
}