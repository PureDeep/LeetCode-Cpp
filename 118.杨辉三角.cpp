/*
 * @Author: PureDeep
 * @Date: 2020-09-23 07:49:46
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-23 12:44:24
 * @FilePath: \LeetCode_Cpp\118.杨辉三角.cpp
 */
/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; i++)
        {
            ans.push_back(vector<int>(i + 1, 1));
        }
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 1; j < i; j++)
            {
                ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
        }
        return ans;
    }
};
// @lc code=end
