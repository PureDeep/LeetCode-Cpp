/*
 * @Author: PureDeep
 * @Date: 2020-10-17 16:42:08
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-17 17:47:11
 * @FilePath: \LeetCode\977.有序数组的平方.cpp
 */
/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int get_abs(int x)
    {
        if (x < 0)
        {
            return x * (-1);
        }
        else
        {
            return x;
        }
    }

    vector<int> sortedSquares(vector<int> &A)
    {
        int size = A.size();
        vector<int> res;
        for (int i = 0; i < size; i++)
        {
            res.push_back(0);
        }
        int i = 0, j = A.size() - 1;
        int k = A.size() - 1;
        while (i <= j)
        {
            if (get_abs(A[i]) < get_abs(A[j]))
            {
                res[k] = A[j] * A[j];
                j--;
                k--;
            }
            else
            {
                res[k] = A[i] * A[i];
                i++;
                k--;
            }
        }
        return res;
    }
};
// @lc code=end
