/*
 * @Author: PureDeep
 * @Date: 2020-11-18 17:31:35
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-19 14:43:23
 * @FilePath: \Exercise-CPlusPlusd:\01-Learning\03-LeetCode\LeetCode\58.最后一个单词的长度.cpp
 */
/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <string>

using namespace std;

// @lc code=start
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        if (s == "")
        {
            return 0;
        }
        int strSize = s.length();
        int end = -1;
        int begin = -1;
        int flag = 0;
        for (int i = strSize - 1; i >= 0; i--)
        {
            if (s[i] != ' ' && flag == 0)
            {
                end = i;
                flag = 1;
            }
            else if (s[i] == ' ' && flag == 1)
            {
                begin = i;
                break;
            }
        }
        return end - begin;
    }
};
// @lc code=end

int main(int argc, char *argv[])
{
    string s = "hello world";
    Solution ans;
    cout << ans.lengthOfLastWord(s) << endl;
    s = "";
    cout << ans.lengthOfLastWord(s) << endl;
    s = " helllo woeld ";
    cout << ans.lengthOfLastWord(s) << endl;
    return 0;
}