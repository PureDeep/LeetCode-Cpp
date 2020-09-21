/*
 * @Author: PureDeep
 * @Date: 2020-09-01 10:06:13
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-01 16:51:21
 * @FilePath: \LeetCode\1.两数之和.cpp
 */
/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int i, j;
        for (i = 0; i < nums.size() - 1; i++)
        {
            for (j = 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
// @lc code=end