#include <iostream>
using namespace std;

int incrementByOne(int num)
{
    num = num + 1;
    return num;
}
void printincrementByOne(int num)
{
    num = num + 1;
}

// !passing as refrence
void printincrementByOne(int &num)
{
    num = num + 1;
}

int main()
{
    // int n = 5;

    // !creating : refrence var/nickname/alias of original variable[n]
    // Refreing same : Memory Address
    // int &k = n;
    // int &c = k;
    // int &d = n;
    // cout << n << endl;
    // cout << k << endl;
    // cout << c << endl;
    // cout << d << endl;

    // !update : if we update any of varible then it will reflect in all because : they are refreing same : Memory Address
    // k++;
    // cout << n << endl;
    // cout << k << endl;
    // cout << c << endl;
    // cout << d << endl;

    // !Assigning value to a refrence variavle
    // can create alias of <Variable> not a constant
    // int &t = 6; // Give Error

    //! Call by Value
    int num;
    cout << "Enter num : ";
    cin >> num;
    // num = incrementByOne(num);
    // cout << "num : " << num << endl;

    // not changing value of num
    // printincrementByOne(num);
    cout << "num : " << num << endl;
}