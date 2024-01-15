#include <iostream>
using namespace std;

int main()
{

    // int a = 10;
    // cout << ++a * a++ << endl;
    // cout << (++a) * (a++) << endl;

    // doubt : Output
    /*
     * 120,
     * 132
     * 121
     */

    int a = 10;
    int b = ++a * a++;
    cout << b << endl;

    // Compiler dependent
    // !Error : Multiple unsequenced modifications to "a" [thats why this is giving] >> Multiple output
}