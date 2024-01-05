#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 5; i++)
    {
        cout << "Outer Loop : " << i << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "Inner loop : " << j << endl;
        }
        cout << endl;
    }

    // Ex:
    int i = 1;
    for (;;)
    {
        if (i < 5)
        {

            cout << "Spiderman" << endl;
        }
        i++;
    }
    cout << "Loop Ended...." << endl;

    return 0;
}