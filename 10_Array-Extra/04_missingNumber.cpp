#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }

    int totalSum = ((n) * (n + 1)) / 2;
    int ans = totalSum - sum;
    return ans;
}

int main()
{
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int missingNum = missingNumber(nums);
    cout << "Missing Number : " << missingNum << endl;
}