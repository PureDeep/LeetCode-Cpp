/*
 * @Author: PureDeep
 * @Date: 2020-10-31 11:04:11
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-31 14:21:35
 * @FilePath: \LeetCode\53.最大子序和.cpp
 */
/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */
using namespace std;
#include <vector>
#include <limits.h>
#include <iostream>

// @lc code=start
class Solution
{
public:
    int findMaxCrossingSubArray(vector<int> &nums, int low, int mid, int high)
    {
        int leftSum = INT_MIN;
        int sum = 0;
        for (int i = mid; i >= low; i--)
        {
            sum += nums[i];
            leftSum = max(leftSum, sum);
        }

        int rightSum = INT_MIN;
        sum = 0;
        for (int i = mid + 1; i <= high; i++)
        {
            sum += nums[i];
            rightSum = max(rightSum, sum);
        }
        return (leftSum + rightSum);
    }

    int maxSubArray(vector<int> &nums, int low, int high)
    {
        if (high == low)
        {
            return nums[low];
        }
        int mid = (low + high) / 2;
        int leftMaxSum = maxSubArray(nums, low, mid);
        int rightMaxSum = maxSubArray(nums, mid + 1, high);
        int crossingMaxSum = findMaxCrossingSubArray(nums, low, mid, high);
        int result = max(leftMaxSum, rightMaxSum);
        result = max(result, crossingMaxSum);
        return result;
    }

    int maxSubArray(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size() - 1;
        int result = INT_MIN;
        result = maxSubArray(nums, low, high);
        return result;
    }
};
// @lc code=end
