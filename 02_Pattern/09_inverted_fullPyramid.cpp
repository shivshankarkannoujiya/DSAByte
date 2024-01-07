#include <iostream>
using namespace std;

int main()
{

    int totalRows;
    cout << "Enter totalRows : ";
    cin >> totalRows;

    // outerLoop
    for (int row = 0; row < totalRows; row++)
    {
        // spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        // stars
        for (int col = 0; col < (totalRows - row); col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}