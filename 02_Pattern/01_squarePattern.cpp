#include <iostream>
using namespace std;

int main()
{

    // outerloop
    for (int i = 0; i < 4; i++)
    {
        // innerloop
        for (int j = 0; j < 4; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// op :
/*
 * * * *
 * * * *
 * * * *
 * * * *
 */