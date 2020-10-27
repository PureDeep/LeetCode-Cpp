/*
 * @Author: PureDeep
 * @Date: 2020-10-13 17:43:17
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-24 10:55:09
 * @FilePath: \LeetCode\289.生命游戏.cpp
 */
/*
 * @lc app=leetcode.cn id=289 lang=cpp
 *
 * [289] 生命游戏
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    int isAlive(vector<vector<int>> &board, int x, int y)
    {
        int dx[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
        int dy[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
        int sum = 0;
        for (int i = 0; i < 9; i++)
        {
            int px = x + dx[i];
            int py = y + dy[i];
            if (px >= 0 && px < board.size() && py >= 0 && py < board[0].size())
            {
                sum += board[px][py];
            }
        }
        sum -= board[x][y];
        cout << x << ", " << y << ": " << sum << endl;
        return sum;
    }

    void gameOfLife(vector<vector<int>> &board)
    {
        int row = board.size();
        int col = board[0].size();
        vector<vector<int>> res(row, vector<int>(col));
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (board[i][j] == 1 && ((isAlive(board, i, j) < 2) || (isAlive(board, i, j) > 3)))
                {
                    res[i][j] = 0;
                }
                else if (board[i][j] == 1 && isAlive(board, i, j) == 2)
                {
                    res[i][j] = 1;
                }
                else if (board[i][j] == 1 && isAlive(board, i, j) == 3)
                {
                    res[i][j] = 1;
                }
                else if (board[i][j] == 0 && (isAlive(board, i, j) == 3))
                {
                    res[i][j] = 1;
                }
                // if (board[i][j] == 1)
                // {
                //     if (isAlive(board, i, j) < 2)
                //     {
                //         res[i][j] = 0;
                //     }
                //     else if (isAlive(board, i, j) == 2)
                //     {
                //         res[i][j] = 1;
                //     }
                //     else if (isAlive(board, i, j) == 3)
                //     {
                //         res[i][j] = 1;
                //     }
                //     else if (isAlive(board, i, j) > 3)
                //     {
                //         res[i][j] = 0;
                //     }
                // }
                // else if (board[i][j] == 0)
                // {
                //     if (isAlive(board, i, j) == 3)
                //     {
                //         res[i][j] = 0;
                //     }
                // }
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                board[i][j] = res[i][j];
            }
        }
    }
};
// @lc code=end
