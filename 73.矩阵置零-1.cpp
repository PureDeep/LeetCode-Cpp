/*
 * @Author: PureDeep
 * @Date: 2020-10-01 21:37:39
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-01 23:22:03
 * @FilePath: \LeetCode\73.矩阵置零.cpp
 */
/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] == 0)
                {
                    int temp_row = i;
                    int temp_col = j;
                    for (int p = 0; p < col; p++)
                    {
                        matrix[i][p] = 0;
                    }
                    for (int p = 0; p < row; p++)
                    {
                        matrix[p][j] = 0;
                    }
                }
            }
        }
    }
};
// @lc code=end
