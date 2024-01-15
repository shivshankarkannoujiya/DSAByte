#include <iostream>
using namespace std;

// Global variable
int age = 25;

int main()
{

    if (true)
    {
        cout << "Inside if number-1" << endl;
        int a = 202;
        if (true)
        {
            cout << "Inside if number-2" << endl;
            cout << a << endl; // 202
            int a = 303;
            cout << a << endl; // 303

            // Accessiing global variable
            cout << age << endl;
        }

        // Accessiing global variable
        cout << age << endl;
    }
    // Accessiing global variable
    cout << age << endl;
}