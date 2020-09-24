/*
 * @Author: PureDeep
 * @Date: 2020-09-24 09:36:18
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-24 10:53:08
 * @FilePath: \LeetCode\661.图片平滑器.cpp
 */
/*
 * @lc app=leetcode.cn id=661 lang=cpp
 *
 * [661] 图片平滑器
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<vector<int>> imageSmoother(vector<vector<int>> &M)
    {
        int row = M.size();
        int col = M[0].size();
        vector<vector<int>> ans(M);
        if (row == 1 && col == 1)
        {
            return ans;
        }
        else if (row == 1 && col != 1)
        {
            for (int i = 0; i < col; i++)
            {
                if (i == 0)
                {
                    ans[0][i] = (int)(ans[0][])
                }
            }
        }
    }
};
// @lc code=end
