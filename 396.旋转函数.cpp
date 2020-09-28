/*
 * @Author: PureDeep
 * @Date: 2020-09-25 07:47:27
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-26 18:20:25
 * @FilePath: \LeetCode\396.旋转函数.cpp
 */
/*
 * @lc app=leetcode.cn id=396 lang=cpp
 *
 * [396] 旋转函数
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int maxRotateFunction(vector<int> &A)
    {
        long n = A.size();
        long s = 0;
        long t = 0;
        for (int i = 0; i < n; i++)
        {
            s += A[i];
            t += i * A[i];
        }
        long res = t;
        for (int i = n - 1; i >= 0; i--)
        {
            t += s - n * (long)A[i];
            res = max(res, t);
        }
        return res;
    }
};
// @lc code=end
