/*
 * @Author: PureDeep
 * @Date: 2020-09-12 20:54:08
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-13 10:10:08
 * @FilePath: \LeetCode\414.第三大的数.cpp
 */
/*
 * @lc app=leetcode.cn id=414 lang=cpp
 *
 * [414] 第三大的数
 */

#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        long long max1 = -3e9;
        long long max2 = -3e9;
        long long max3 = -3e9;
        int count = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
                count++;
            }
            else if (nums[i] > max2 && nums[i] < max1)
            {
                max3 = max2;
                max2 = nums[i];
                count++;
            }
            else if (nums[i] > max3 && nums[i] < max2)
            {
                max3 = nums[i];
                count++;
            }
        }
        if (max3 == -3e9)
            return max1;
        else
            return max3;
    }
};
// @lc code=end
