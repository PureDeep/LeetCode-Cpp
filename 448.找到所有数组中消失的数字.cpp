/*
 * @Author: PureDeep
 * @Date: 2020-09-15 11:47:55
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-15 16:50:22
 * @FilePath: \LeetCode\448.找到所有数组中消失的数字.cpp
 */
/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
 */
#include <vector>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> ans;
        if (nums.empty())
            return ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int index = (nums[i] - 1) % nums.size();
            nums[index] += nums.size();
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= nums.size())
                ans.push_back(i + 1);
        }
        return ans;
    }
};
// @lc code=end
