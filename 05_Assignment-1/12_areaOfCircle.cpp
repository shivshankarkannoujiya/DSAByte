#include <iostream>
using namespace std;

float areaOfCircle(float radius)
{

    float area = 3.14 * radius * radius;
    return area;
}

int main()
{
    float radius;
    cout << "Enter radius : ";
    cin >> radius;

    // fn-call
    float Area = areaOfCircle(radius);
    cout << "Area is : " << Area << endl;
}