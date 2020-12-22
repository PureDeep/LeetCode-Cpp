/*
 * @Author: PureDeep
 * @Date: 1970-01-01 08:00:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-21 17:03:01
 * @FilePath: /LeetCode/135.分发糖果.cpp
 */
/*
 * @lc app=leetcode.cn id=135 lang=cpp
 *
 * [135] 分发糖果
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int size = ratings.size();
        vector<int> candy(size, 1);
        for (auto iter = candy.begin(); iter != candy.end(); ++iter)
        {
            *iter = 1;
        }
        for (int i = 0; i < size - 1; ++i)
        {
            if (ratings[i + 1] > ratings[i])
            {
                candy[i + 1] = candy[i] + 1;
            }
        }
        for (int i = size - 1; i > 0; --i)
        {
            if (ratings[i - 1] > ratings[i])
            {
                candy[i - 1] = max(candy[i - 1], candy[i] + 1);
            }
        }
        int sum = 0;
        for (auto i : candy)
        {
            sum += i;
        }
        return sum;
    }
};
// @lc code=end
