/*
 * @Author: PureDeep
 * @Date: 2020-09-12 16:25:38
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-12 20:49:33
 * @FilePath: \LeetCode\495.提莫攻击.cpp
 */
/*
 * @lc app=leetcode.cn id=495 lang=cpp
 *
 * [495] 提莫攻击
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration)
    {
        int ans = 0;
        if (timeSeries.size() != 0)
        {
            for (int i = 1; i < timeSeries.size(); i++)
            {
                if (timeSeries[i] - timeSeries[i - 1] > duration)
                {
                    ans += duration;
                }
                else
                {
                    ans += timeSeries[i] - timeSeries[i - 1];
                }
            }
            ans += duration;
        }else{
            return ans;
        }

        return ans;
    }
};
// @lc code=end
