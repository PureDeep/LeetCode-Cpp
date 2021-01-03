/*
 * @Author: PureDeep
 * @Date: 2020-09-24 09:36:18
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-19 22:53:18
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
    int Smoother(vector<vector<int>> &M, int x, int y)
    {
        int dx[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
        int dy[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
        int sum = 0, count = 0;
        for (int i = 0; i < 9; i++)
        {
            int px = x + dx[i];
            int py = y + dy[i];
            if (px >= 0 && px < M.size() && py >= 0 && py < M[0].size())
            {
                sum += M[px][py];
                count++;
            }
        }
        return sum / count;
    }

    vector<vector<int>> imageSmoother(vector<vector<int>> &M)
    {
        int row = M.size();
        int col = M[0].size();
        vector<vector<int>> res(row, vector<int>(col));
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                res[i][j] = Smoother(M, i, j);
            }
        }
        return res;
    }
};
// @lc code=end
