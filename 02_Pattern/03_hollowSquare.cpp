#include <iostream>
using namespace std;

int main()
{

    int Rows, Cols;
    cout << "Enter row : ";
    cin >> Rows;
    cout << "Enter col : ";
    cin >> Cols;
    cout << endl;
                
    for (int row = 0; row < Rows; row++)
    {
        for (int col = 0; col < Cols; col++)
        {
            if (row == 0 || row == Rows - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == Cols - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}