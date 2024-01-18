#include <iostream>
using namespace std;

void numericalHollowInvertedHalfPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = row + 1; col <= n; col++)
        {
            if (col == row + 1 || col == n || row == 0)
            {

                cout << col;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    numericalHollowInvertedHalfPyramid(n);
}