#include <iostream>
using namespace std;

// findMax
void findMax(int numberOne, int numberTwo, int numberThree)
{
    if (numberOne > numberTwo && numberOne > numberThree)
    {
        cout << "Max is : " << numberOne << endl;
    }
    else if (numberTwo > numberOne && numberTwo > numberThree)
    {
        cout << "Max is : " << numberTwo << endl;
    }
    else
    {
        cout << "Max is : " << numberThree << endl;
    }
}

// returnMax
int returnMax(int numberOne, int numberTwo, int numberThree)
{
    if (numberOne > numberTwo && numberOne > numberThree)
    {
        return numberOne;
    }
    else if (numberTwo > numberOne && numberTwo > numberThree)
    {
        return numberTwo;
    }
    else
    {
        return numberThree;
    }
}

int main()
{

    // calling fn
    findMax(1, 2, 3);

    // calling fn
    int maxNum = returnMax(1, 2, 2);
    cout << "Max is : " << maxNum << endl;
}