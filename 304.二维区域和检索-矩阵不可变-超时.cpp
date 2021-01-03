/*
 * @Author: PureDeep
 * @Date: 2020-11-01 22:56:26
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-02 12:22:00
 * @FilePath: \LeetCode\304.二维区域和检索-矩阵不可变.cpp
 */
/*
 * @lc app=leetcode.cn id=304 lang=cpp
 *
 * [304] 二维区域和检索 - 矩阵不可变
 */
using namespace std;
#include <vector>
#include <iostream>

// @lc code=start
class NumMatrix
{
private:
    vector<vector<int>> tmp; //创建一个临时数组

public:
    NumMatrix(vector<vector<int>> &matrix)
    {
        if (matrix.size() == 0)
        {
            return;
        }
        int row = matrix.size(), col = matrix[0].size();
        for (int i = 0; i < row; i++)
        {
            tmp.emplace_back(vector<int>(col, 0));
        }
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                tmp[i][j] = matrix[i][j];
            }
        }
        // for (int i = 0; i < tmp.size(); i++)
        // {
        //     for (int j = 0; j < tmp[0].size(); j++)
        //     {
        //         cout << tmp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        int res = 0;
        for (int i = row1; i <= row2; i++)
        {
            for (int j = col1; j <= col2; j++)
            {
                res += tmp[i][j];
            }
        }
        return res;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
// @lc code=end
int main()
{
    vector<vector<int>> matrix = {
        {3, 0, 1, 4, 2},
        {5, 6, 3, 2, 1},
        {1, 2, 0, 1, 5},
        {4, 1, 0, 1, 7},
        {1, 0, 3, 0, 5}};
    NumMatrix *ans = new NumMatrix(matrix);
    int res = ans->sumRegion(2, 1, 4, 3);
    cout << res << endl;
    res = ans->sumRegion(1, 1, 2, 2);
    cout << res << endl;
    res = ans->sumRegion(1, 2, 2, 4);
    cout << res << endl;
    return 0;
}