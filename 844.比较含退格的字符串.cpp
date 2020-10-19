/*
 * @Author: PureDeep
 * @Date: 2020-10-19 08:24:58
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-19 09:57:49
 * @FilePath: \LeetCode\844.比较含退格的字符串.cpp
 */
/*
 * @lc app=leetcode.cn id=844 lang=cpp
 *
 * [844] 比较含退格的字符串
 */
#include <iostream>
#include <stack>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool backspaceCompare(string S, string T)
    {
        stack<char> S1;
        stack<char> T1;
        for (auto x : S)
        {
            if (x != '#')
            {
                S1.push(x);
            }
            else if (x == '#' && !S1.empty()) //如果S1中没有元素，且下一个字符为#，那么就什么都不做
            {
                S1.pop();
            }
        }
        for (auto x : T)
        {
            if (x != '#')
            {
                T1.push(x);
            }
            else if (x == '#' && !T1.empty())
            {
                T1.pop();
            }
        }
        if (S1 == T1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// @lc code=end
