/*
 * @Author: PureDeep
 * @Date: 2020-11-16 21:23:10
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-17 11:26:11
 * @FilePath: \LeetCode\14.最长公共前缀.cpp
 */
/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(string &s1, string &s2)
    {
        int len = min(s1.size(), s2.size());
        int index = 0;
        while (index < len && s1[index] == s2[index])
        {
            ++index;
        }
        return s1.substr(0, index);
    }

    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
        {
            return "";
        }
        string prefix = strs[0];
        int strsSize = strs.size();
        for (int i = 1; i < strsSize; ++i)
        {
            prefix = longestCommonPrefix(prefix, strs[i]);
            if (!prefix.size())
            {
                break;
            }
        }
        return prefix;
    }
};
// @lc code=end

int main(int argc, char *argv[])
{

    return 0;
}