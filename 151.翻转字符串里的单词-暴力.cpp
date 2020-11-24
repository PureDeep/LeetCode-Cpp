/*
 * @Author: PureDeep
 * @Date: 2020-11-20 11:19:23
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-23 11:00:56
 * @FilePath: \LeetCode\151.翻转字符串里的单词.cpp
 */
/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 翻转字符串里的单词
 */

#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <string>

using namespace std;

// @lc code=start
class Solution
{
public:
    string reverseWords(string s)
    {
        int len = s.size();
        int start = 0;
        int space_flag = 1;
        string result;
        for (int i = 0; i < len; ++i)
        {
            if (i == len - 1 && s[i] != ' ' && space_flag == 1)
            {
                result = s.substr(i) + result;
            }
            if (s[i] != ' ' && space_flag == 1)
            {
                start = i;
                space_flag = 0;
            }
            else if (s[i] == ' ' && space_flag == 0)
            {
                int tmp_len = i - start;
                result = ' ' + s.substr(start, tmp_len) + result;
                space_flag = 1;
            }
            else if (i == len - 1 && space_flag == 0)
            {
                result = s.substr(start) + result;
            }
        }
        cout << s[len - 1] << endl;
        cout << result << endl;
        if (s[len - 1] == ' ')
        {
            result = result.substr(1);
        }
        return result;
    }
};
// @lc code=end

int main(int argc, char *argv[])
{
    string que = " asdasd df f";
    Solution ans;
    cout << ans.reverseWords(que) << endl;
    return 0;
}