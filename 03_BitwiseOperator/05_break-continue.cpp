#include <iostream>
using namespace std;

int main()
{

    // for (int i = 0; i < 5; i++)
    // {
    //     if (i == 2)
    //     {
    //         break;
    //     }
    //     cout << i << endl;
    // }

    for (int i = 0; i < 5; i++)
    {
        if (i == 1)
        {
            cout << "[+] Skipping iteration : " << i << endl;
            continue;
        }
        cout << i << endl;
    }
}