#include <iostream>
#include <vector>

using namespace std;

// Method-1 
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }

    return ans;
}

// Method-2

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target;
    cout << "Enter Target : ";
    cin >> target;

    // calling function
    vector<int> ans = twoSum(nums, target);

    // printing ans
    for (auto it : ans)
    {
        cout<< it << "  ";
    }
}