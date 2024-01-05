#include <iostream>
using namespace std;

int main()
{

    // Ex:1
    int balance;
    cout << "Enter the Balance : ";
    cin >> balance;
    if (balance >= 10)
    {
        cout << "Go to Market" << endl;
    }
    else
    {
        cout << "Sleep at Home" << endl;
    }

    // Ex:2
    int sides;
    cout << "Enter the Sides : ";
    cin >> sides;
    if (sides == 3)
    {
        cout << "Triangle" << endl;
    }
    else
    {
        cout << "Not a Triangle" << endl;
    }

    // if else-if else
    // Ex:3
    if (sides == 3)
    {
        cout << "Triangle" << endl;
    }
    else if (sides == 4)
    {
        cout << "Rectangle" << endl;
    }
    else if (sides == 5)
    {
        cout << "Pentagon" << endl;
    }
    else
    {
        cout << "I do not know " << endl;
    }

    // Ex:4
    int number;
    cout << "Enter the Number : ";
    cin >> number;
    if (number < 0)
    {
        cout << "Negative Number" << endl;
    }
    else if (number == 0)
    {
        cout << "Zero" << endl;
    }
    else
    {
        cout << "Positive Number" << endl;
    }

    // or
    if (number > 0)
    {
        cout << "Positive" << endl;
    }
    else if (number < 0)
    {
        cout << "Negative" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }

    // Odd/Even
    if (number % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}