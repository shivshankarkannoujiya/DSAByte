#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << endl;
}

int main()
{
    vector<int> v;

    // Inserting elements
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

        printVector(v);

    // delete item from end
    v.pop_back();
    printVector(v);

    // size  = totalElement in vector
    // capacity = totalElement we can push
    // Aga vector full ho jata hai then size of allocation in vector becomes double

    // while (true)
    // {
    //     int data;
    //     std::cout << "Data : ";
    //     std::cin >> data;
    //     v.push_back(data);
    //     std::cout << "size is : " << v.size() << "  "
    //               << "Capacity : " << v.capacity() << endl;
    // }
}