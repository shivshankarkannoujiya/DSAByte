#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int> &nums)
{
    int size = nums.size();
    int index = 0;
    int left = 0;
    int right = size - 1;
    while (index <= right)
    {
        if (nums[index] == 0)
        {
            swap(nums[index], nums[left]);
            left++;
            index++;
        }
        else if (nums[index] == 2)
        {
            swap(nums[index], nums[right]);
            right--;
        }
        else
        {
            // agar nums[index]==1 --> ignore
            index++;
        }
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 2, 1, 0, 1, 2};
    int size = nums.size();

    sortColors(nums);
    // printing array
    for (auto it : nums)
    {
        cout << it << " ";
    }
}