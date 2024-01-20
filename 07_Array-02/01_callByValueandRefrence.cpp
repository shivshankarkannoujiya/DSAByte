#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    // !creating : refrence var/nickname/alias of original variable[n]
    // Refreing same : Memory Address
    int &k = n;
    int &c = k;
    int &d = n;
    cout << n << endl;
    cout << k << endl;
    cout << c << endl;
    cout << d << endl;

    // !update : if we update any of varible then it will reflect in all because : they are refreing same : Memory Address
    k++;
    cout << n << endl;
    cout << k << endl;
    cout << c << endl;
    cout << d << endl;

    // Assigning value to a refrence variavle 
    int &t = 6;
}