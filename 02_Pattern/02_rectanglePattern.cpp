#include <iostream>
using namespace std;

int main()
{

    // outerLoop
    for (int i = 0; i < 3; i++)
    {
        // outerLoop
        for (int j = 0; j < 6; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// op:
/*
* * * * * *
* * * * * *
* * * * * *

*/