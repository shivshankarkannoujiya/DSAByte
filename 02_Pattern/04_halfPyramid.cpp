#include <iostream>
using namespace std;

int main()
{

    int TotalRows;
    cout << "Enter Total-Rows : ";
    cin >> TotalRows;
    for (int row = 0; row < TotalRows; row++)
    {
        for (int j = 0; j < row + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}