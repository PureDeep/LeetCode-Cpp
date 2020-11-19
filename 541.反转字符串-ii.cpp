/*
 * @Author: PureDeep
 * @Date: 2020-11-19 14:55:50
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-19 16:08:11
 * @FilePath: \Exercise-CPlusPlusd:\01-Learning\03-LeetCode\LeetCode\541.反转字符串-ii.cpp
 */
/*
 * @lc app=leetcode.cn id=541 lang=cpp
 *
 * [541] 反转字符串 II
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <string>

using namespace std;

// @lc code=start
class Solution
{
public:
    void reverseString(string &s, int begin, int end)
    {
        int strSize = end - begin + 1;
        if (strSize == 0)
            return;
        for (int i = 0; i < strSize / 2; i++)
        {
            int tmp = s[begin + i];
            s[begin + i] = s[begin + strSize - i - 1];
            s[begin + strSize - 1 - i] = tmp;
        }
    }

    string reverseStr(string s, int k)
    {
        int strSize = s.size();
        // int doubleK = k << 1;
        // int count = strSize / doubleK;
        int i = 0;
        while (i < strSize)
        {
            if (i + k >= strSize)
            {
                reverseString(s, i, strSize - 1);
            }
            else
            {
                reverseString(s, i, i + k - 1);
            }
            i += 2 * k;
        }
        return s;
    }
};
// @lc code=end

int main(int argc, char *argv[])
{
    string s = "abcdefghijkhlkdaml";
    Solution ans;
    ans.reverseString(s, 0, s.size() - 1);
    cout << s << endl;
    return 0;
}