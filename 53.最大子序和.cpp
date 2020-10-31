/*
 * @Author: PureDeep
 * @Date: 2020-10-31 11:04:11
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-31 11:42:03
 * @FilePath: \LeetCode\53.最大子序和.cpp
 */
/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */
using namespace std;
#include <vector>

// @lc code=start
class Solution
{
public:
    int findMaxCrossingSubArray(vector<int> &nums, int low, int mid, int high)
    {
        int leftMaxSum = INT_MIN;
        int sum = 0;
        int maxLeft = 0;
        for (int i = mid - 1; i >= low; i--)
        {
            sum += nums[i];
            if (sum > leftMaxSum)
            {
                leftMaxSum = sum;
                maxLeft = i;
            }
        }
        int rightMaxSum = INT_MIN;
        int maxRight = 0;
        sum = 0;
        for (int i = mid; i < high; i++)
        {
            sum += nums[i];
            if (sum > rightMaxSum)
            {
                rightMaxSum = sum;
                maxRight = i;
            }
        }
        sum = leftMaxSum + rightMaxSum;
        return sum;
    }

    int maxSubArray(vector<int> &nums, int low, int high)
    {
        if (high = low)
        {
            return nums[low];
        }
        else
        {
            int mid = (low + high) / 2;
            int leftMaxSum = maxSubArray(nums, low, mid);
            int rightMaxSum = maxSubArray(nums, mid + 1, high);
            int crossingMaxSum = findMaxCrossingSubArray(nums, low, mid, high);
            if (leftMaxSum > rightMaxSum && leftMaxSum > crossingMaxSum)
            {
                return leftMaxSum;
            }
            else if (rightMaxSum > leftMaxSum && rightMaxSum > crossingMaxSum)
            {
                return rightMaxSum;
            }
            else
            {
                return crossingMaxSum;
            }
        }
    }

    int maxSubArray(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size();
        return maxSubArray(nums, low, high);
    }
};
// @lc code=end
