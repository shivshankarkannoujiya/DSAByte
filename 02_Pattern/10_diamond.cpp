#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter num : ";
    cin >> num;

    int n = num / 2;

    // Part-1
    for (int row = 0; row < n; row++)
    {

        // spcaes
        for (int col = 0; col < (n - row - 1); col++)
        {
            cout << " ";
        }

        // Stars
        for (int col = 0; col < (row + 1); col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // part-2
    for (int row = 0; row < n; row++)
    {

        // spcaes
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // Stars
        for (int col = 0; col < (n - row); col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}