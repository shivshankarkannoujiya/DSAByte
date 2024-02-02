#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int leftSum = 0;
        int rightSum = 0;

        // leftSum
        for (int j = 0; j < i; j++)
        {
            leftSum += nums[j];
        }

        //  rightSum
        for (int j = i + 1; j < n; j++)
        {
            rightSum += nums[j];
        }

        if (leftSum == rightSum)
        {
            return i;
        }
    }

    // not find pivotIndex
    return -1;
}

// method-2
int prefixSumApproach(vector<int> &nums)
{
    int n = nums.size();

    // create 2 array
    vector<int>lsum(n,0);
    vector<int>rsum(n,0);

    // find lsum
    for(int i =1;i<n;i++){
        lsum[i]=lsum[i-1]+nums[i-1];
    }

    // find rsum
    for(int i = n-2;i>=0;i--){
        rsum[i] = rsum[i+1]+nums[i+1];
    }

    // checking 
    for(int i = 0; i<n;i++){
        if(lsum[i]==rsum[i]){
            return i;
        }
    }

    // not find 
    return -1;

    
}

int main()
{
    vector<int> v = {1, 7, 3, 6, 5, 6};

    // calling function
    // int PivotIndex = pivotIndex(v);
    // cout << "PivotIndex is : " << PivotIndex << endl;
    int pivot = prefixSumApproach(v);
    cout << "PivotIndex is : " << pivot << endl;
}