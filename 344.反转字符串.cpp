/*
 * @Author: PureDeep
 * @Date: 2020-11-19 14:44:32
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-19 14:54:30
 * @FilePath: \Exercise-CPlusPlusd:\01-Learning\03-LeetCode\LeetCode\344.反转字符串.cpp
 */
/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <vector>

using namespace std;

// @lc code=start
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int strSize = s.size();
        if (strSize == 0)
            return;
        for (int i = 0; i < strSize / 2; i++)
        {
            int tmp = s[i];
            s[i] = s[strSize - i - 1];
            s[strSize - 1 - i] = tmp;
        }
    }
};
// @lc code=end

int main(int argc, char *argv[])
{
    // vector<char> s = {"h ", " e ", " l ", " l ", " o "};
    // Solution ans;
    // ans.reverseString(s);

    return 0;
}