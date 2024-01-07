#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {

        // innerloop
        // spcaes
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        // Stars
        for (int col = 0; col < (n - row); col++)
        {
            
            // condition to print * and spaces
            if (col == 0 || col == n - row - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}