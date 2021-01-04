/*
 * @Author: PureDeep
 * @Date: 1970-01-01 00:00:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2021-01-04 03:53:33
 * @FilePath: /LeetCode/122.买卖股票的最佳时机-ii.cpp
 */
/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int size = prices.size();
        int profit = 0;
        for (int i = 0; i < size; ++i)
        {
            if (i + 1 < size)
            {
                if (prices[i + 1] - prices[i] > 0)
                {
                    profit += prices[i + 1] - prices[i];
                }
            }
        }
        return profit;
    }
};
// @lc code=end
int main(int argc, char *argv[])
{
    Solution ans;
    vector<int> nums = {7, 1, 5, 3, 6, 4};
    int profit = ans.maxProfit(nums);
    cout << profit << endl;
    return 0;
}