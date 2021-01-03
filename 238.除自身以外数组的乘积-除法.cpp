/*
 * @Author: PureDeep
 * @Date: 2020-11-03 10:06:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-03 10:57:43
 * @FilePath: \LeetCode\238.除自身以外数组的乘积.cpp
 */
/*
 * @lc app=leetcode.cn id=238 lang=cpp
 *
 * [238] 除自身以外数组的乘积
 */
using namespace std;
#include <vector>
#include <iostream>

// @lc code=start
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> ans;
        int product = 1;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                product *= nums[i];
            }
            else
            {
                count++;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                if (count >= 1)
                {
                    ans.push_back(0);
                }
                else
                {
                    ans.push_back(product / nums[i]);
                }
            }
            else
            {
                if (count > 1)
                {
                    ans.push_back(0);
                }
                else
                {
                    ans.push_back(product);
                }
            }
        }
        return ans;
    }
};
// @lc code=end
