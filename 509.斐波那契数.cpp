/*
 * @Author: PureDeep
 * @Date: 1970-01-01 00:00:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2021-01-04 04:03:41
 * @FilePath: /LeetCode/509.斐波那契数.cpp
 */
/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */
#include <iostream>

using namespace std;

// @lc code=start
class Solution
{
public:
    int fib(int n)
    {
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;
        else
        {
            return fib(n - 1) + fib(n - 2);
        }
    }
};
// @lc code=end

int main(int argc, char *argv[])
{
    Solution ans;
    cout << ans.fib(2) << endl;
    cout << ans.fib(3) << endl;
    cout << ans.fib(4) << endl;
    return 0;
}