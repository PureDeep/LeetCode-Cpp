/*
 * @Author: PureDeep
 * @Date: 2020-09-23 12:40:18
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-23 13:39:24
 * @FilePath: \LeetCode_Cpp\119.杨辉三角-ii.cpp
 */
/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        if (rowIndex == 0)
            return vector<int>(1, 1);
        if (rowIndex == 1)
            return vector<int>(2, 1);

        vector<int> result(rowIndex + 1, 1);
        int n = rowIndex + 1;
        for (int i = 0; i < n; i++)
        {
            result[i] = 1;
            for (int j = i - 1; j > 0; j--)
            {
                result[j] = result[j - 1] + result[j];
            }
        }
        return result;
    }
};
// @lc code=end
