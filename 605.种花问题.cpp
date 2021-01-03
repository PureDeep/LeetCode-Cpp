/*
 * @Author: PureDeep
 * @Date: 1970-01-01 00:00:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2021-01-01 10:02:26
 * @FilePath: /LeetCode/605.种花问题.cpp
 */
/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int size = flowerbed.size();
        int count = 0;
        int prev = -2;
        for (int i = 0; i < size; ++i)
        {
            if (i - prev > 1 && flowerbed[i] == 0)
            {
                flowerbed[i] = 1;
                ++count;
                prev = i;
            }
            else if (flowerbed[i] == 1)
            {
                if (i - prev == 1)
                {
                    flowerbed[prev] = 0;
                    --count;
                }
                prev = i;
            }
        }
        if (count >= n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// @lc code=end
