/*
 * @Author: PureDeep
 * @Date: 2020-09-28 10:22:58
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-28 13:48:14
 * @FilePath: \LeetCode\566.重塑矩阵.cpp
 */
/*
 * @lc app=leetcode.cn id=566 lang=cpp
 *
 * [566] 重塑矩阵
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c)
    {
        int row = nums.size();
        int col = nums[0].size();
        if (row * col != r * c)
        {
            return nums;
        }
        vector<vector<int>> res;
        for (int i = 0; i < r; i++)
        {
            res.push_back(vector<int>(c, 0));
        }
        int r1 = 0, c1 = 0, r2 = 0, c2 = 0;
        while (true)
        {
            res[r2][c2] = nums[r1][c1];
            if (r1 == row - 1 && c1 == col - 1)
            {
                break;
            }
            if (c1 != col - 1)
            {
                c1++;
            }
            else if (r1 != row - 1 && c1 == col - 1)
            {
                r1++;
                c1 = 0;
            }
            else if (r1 == row - 1 && c1 != col - 1)
            {
                c1++;
            }
            if (c2 != c - 1)
            {
                c2++;
            }
            else if (r2 != r - 1 && c2 == c - 1)
            {
                r2++;
                c2 = 0;
            }
            else if (r2 == r - 1 && c2 != c - 1)
            {
                c2++;
            }
        }
        return res;
    }
};
// @lc code=end
