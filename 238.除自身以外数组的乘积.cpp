/*
 * @Author: PureDeep
 * @Date: 2020-11-03 11:00:30
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-03 11:19:31
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
        int len = nums.size();
        vector<int> zuo(len, 1);
        vector<int> you(len, 1);
        vector<int> res(len, 1);
        int left = 1;
        int right = 1;
        for (int i = 0; i < len; i++)
        {
            zuo[i] = left;
            left *= nums[i];
        }
        for (int j = len - 1; j >= 0; j--)
        {
            you[j] = right;
            right *= nums[j];
        }
        for (int i = 0; i < len; i++)
        {
            res[i] = zuo[i] * you[i];
        }
        return res;
    }
};
// @lc code=end
