/*
 * @Author: PureDeep
 * @Date: 2020-09-28 13:51:01
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-29 22:32:29
 * @FilePath: \LeetCode\48.旋转图像.cpp
 */
/*
 * @lc app=leetcode.cn id=48 lang=cpp
 *
 * [48] 旋转图像
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][n - j - 1];
                matrix[i][n - j - 1] = temp;
            }
        }
    }
};
// @lc code=end
