/*
 * @Author: PureDeep
 * @Date: 2020-09-24 10:56:33
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-24 11:46:23
 * @FilePath: \LeetCode\419.甲板上的战舰.cpp
 */
/*
 * @lc app=leetcode.cn id=419 lang=cpp
 *
 * [419] 甲板上的战舰
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int countBattleships(vector<vector<char>> &board)
    {
        int count = 0;
        int row = board.size();
        int col = board[0].size();

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (board[i][j] == 'X')
                {
                    count++;
                    if ((i > 0 && board[i - 1][j] == 'X') || (j > 0 && board[i][j - 1] == 'X'))
                    {
                        count--;
                    }
                }
            }
        }
        return count;
    }
};
// @lc code=end
