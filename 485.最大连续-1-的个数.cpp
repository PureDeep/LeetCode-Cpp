/*
 * @Author: PureDeep
 * @Date: 2020-09-12 11:25:33
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-12 15:39:39
 * @FilePath: \LeetCode\485.最大连续-1-的个数.cpp
 */
/*
 * @lc app=leetcode.cn id=485 lang=cpp
 *
 * [485] 最大连续1的个数
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int num = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                num++;
            }
            else
            {
                num = 0;
            }
            ans = num > ans ? num : ans;
        }
        return ans;
    }
};
// @lc code=end
