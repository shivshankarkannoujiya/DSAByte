#include <bits/stdc++.h>

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
// using 2 pointer approach
vector<int> twoSum2pointerApproach(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    vector<int> value;

    // 1. Sort the vector
    sort(nums.begin(), nums.end());
    while (low < high)
    {
        int csum = nums[low] + nums[high];
        if (csum == target)
        {
            value.push_back(low);
            value.push_back(high);
            return value;
        }
        else if (csum > target)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    // if no pair found return , empty vector
    return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target;
    cout << "Enter Target : ";
    cin >> target;

    // calling function
    // vector<int> ans = twoSum(nums, target);
    vector<int> value = twoSum2pointerApproach(nums, target);

    // printing ans
    for (auto it : value)
    {
        cout << it << "  ";
    }
}