#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        char ch;
        for (int col = 0; col < row + 1; col++)
        {
            // cout << "* ";
            // cout << col + 1 << " ";
            ch = col + 1 + 'A' - 1;
            cout << ch << " ";
        }

        for (char alpha = ch; alpha > 'A';)
        {
            alpha--;
            cout << alpha << " ";
        }

        // char alpha = ch;
        // while (alpha > 'A')
        // {
        //     alpha--;
        //     cout << alpha << " ";
        // }
        cout << endl;
    }
}