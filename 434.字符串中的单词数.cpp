/*
 * @Author: PureDeep
 * @Date: 2020-11-17 11:36:51
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-18 17:26:17
 * @FilePath: \LeetCode\434.字符串中的单词数.cpp
 */
/*
 * @lc app=leetcode.cn id=434 lang=cpp
 *
 * [434] 字符串中的单词数
 */

#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <string>

using namespace std;

// @lc code=start
class Solution
{
public:
    int countSegments(string s)
    {
        if (s == "")
        {
            return 0;
        }

        int zero_flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                zero_flag++;
            }
        }
        if (zero_flag == s.length())
        {
            return 0;
        }

        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int flag = 0;
            while (s[i] == ' ' && i < s.length())
            {
                flag = 1;
                i++;
            }
            if (flag == 1)
            {
                count++;
            }
        }
        if (s[s.length() - 1] == ' ' && s[0] == ' ')
        {
            return count - 1;
        }
        else if (s[s.length() - 1] == ' ' || s[0] == ' ')
        {
            return count;
        }
        else
        {
            return count + 1;
        }
    }
};
// @lc code=end

int main(int argc, char *argv[])
{
    string s = "Hello, my name is John";
    Solution res;
    cout << res.countSegments(s) << endl;
    return 0;
}