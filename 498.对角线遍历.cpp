/*
 * @Author: PureDeep
 * @Date: 2020-09-27 15:32:19
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-27 16:58:59
 * @FilePath: \LeetCode\498.对角线遍历.cpp
 */
/*
 * @lc app=leetcode.cn id=498 lang=cpp
 *
 * [498] 对角线遍历
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> findDiagonalOrder(vector<vector<int>> &matrix)
    {
        // int row = matrix.size();
        // int col = matrix[0].size();
        // int n = row * col;
        // vector<int> res;
        // if (matrix.empty())
        // {
        //     return res;
        // }
        // int r = 0, c = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     res[i] = matrix[r][c];
        //     if ((r + c) % 2 == 0)
        //     { //xiangshang
        //         if (c == col - 1)
        //         {
        //             r++;
        //         }
        //         else if (r == 0)
        //         {
        //             c++;
        //         }
        //         else
        //         {
        //             r--;
        //             c++;
        //         }
        //     }
        //     else
        //     { //xiangxia
        //         if (r == row - 1)
        //         {
        //             c++;
        //         }
        //         else if (c == 0)
        //         {
        //             r++;
        //         }
        //         else
        //         {
        //             r++;
        //             c--;
        //         }
        //     }
        //     if (r > row - 1 || c > col - 1)
        //     {
        //         break;
        //     }
        // }
        // return res;

        if (matrix.empty() || matrix[0].empty())
            return {};
        int R = matrix.size();
        int C = matrix[0].size();
        int d = 1;
        vector<int> res;
        for (int s = 0; s < R + C; ++s)
        {
            int min_r = max(0, s - C + 1);
            int max_r = min(s, R - 1);
            if (d == 1)
            {
                for (int r = max_r; r >= min_r; --r)
                {
                    res.push_back(matrix[r][s - r]);
                }
            }
            else
            {
                for (int r = min_r; r <= max_r; ++r)
                {
                    res.push_back(matrix[r][s - r]);
                }
            }
            d = 1;
        }
        return res;
    }
};
// @lc code=end
