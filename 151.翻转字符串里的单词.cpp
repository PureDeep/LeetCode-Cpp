/*
 * @Author: PureDeep
 * @Date: 2020-11-20 11:19:23
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-23 11:12:27
 * @FilePath: \LeetCode\151.翻转字符串里的单词.cpp
 */
/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 翻转字符串里的单词
 */

#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <sstream>

using namespace std;

// @lc code=start
class Solution
{
public:
    string reverseWords(string s)
    {
        stringstream ss;
        string ans = "", tmp;
        ss << s;
        while (ss >> tmp)
        {
            ans = " " + tmp + ans;
        }
        cout << ans << endl;
        if (ans != "")
        {
            ans.erase(ans.begin());
        }
        cout << ans << endl;
        return ans;
    }
};
// @lc code=end

int main(int argc, char *argv[])
{
    string s = " asdasd df f ";
    Solution ans;
    ans.reverseWords(s);
    return 0;
}