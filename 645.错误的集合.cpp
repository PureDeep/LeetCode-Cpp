/*
 * @Author: PureDeep
 * @Date: 2020-09-14 10:53:41
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-14 15:45:02
 * @FilePath: \LeetCode\645.错误的集合.cpp
 */
/*
 * @lc app=leetcode.cn id=645 lang=cpp
 *
 * [645] 错误的集合
 */
#include <vector>
#include <algorithm>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        int len = nums.size();
        int repet, lost, sum = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                repet = nums[i];
            }
        }
        for (int j = 0; j < len; j++)
        {
            sum += nums[j];
        }
        lost = (len + 1) * len / 2 - (sum - repet);
        return { repet, lost };
    }
};
// @lc code=end
