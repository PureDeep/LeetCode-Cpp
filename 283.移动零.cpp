/*
 * @Author: PureDeep
 * @Date: 2020-09-22 16:36:34
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-22 17:00:06
 * @FilePath: \LeetCode_Cpp\283.移动零.cpp
 */
/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[count++] = nums[i];
            }
        }
        for (int i = count; i < nums.size(); i++)
        {
            nums[i] = 0;
        }
    }
};
// @lc code=end
