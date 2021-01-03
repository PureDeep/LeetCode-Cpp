/*
 * @Author: PureDeep
 * @Date: 2020-09-26 19:26:52
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-27 15:28:07
 * @FilePath: \LeetCode\59.螺旋矩阵-ii.cpp
 */
/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> res;
        for (int i = 0; i < n; i++)
        {
            res.push_back(vector<int>(n, 0));
        }
        int up = 0, down = n - 1, left = 0, right = n - 1;
        int value = 1;
        while (true)
        {
            for (int i = left; i <= right; i++)
                res[up][i] = value++;
            if (++up > down || value > n * n)
                break;
            for (int i = up; i <= down; i++)
                res[i][right] = value++;
            if (--right < left || value > n * n)
                break;
            for (int i = right; i >= left; i--)
                res[down][i] = value++;
            if (--down < up || value > n * n)
                break;
            for (int i = down; i >= up; i--)
                res[i][left] = value++;
            if (++left > right || value > n * n)
                break;
        }
        return res;
    }
};
// @lc code=end
