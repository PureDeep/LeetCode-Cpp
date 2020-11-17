/*
 * @Author: PureDeep
 * @Date: 2020-11-03 15:33:11
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-16 21:20:58
 * @FilePath: \LeetCode\125.验证回文串.cpp
 */
/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <vector>

using namespace std;

// @lc code=start
class Solution
{
public:
    char Lower(char c)
    {
        c = c + 'a' - 'A';
        return c;
    }

    bool isPalindrome(string s)
    {
        if (s == "")
        {
            return true;
        }
        vector<char> v;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                v.push_back(Lower(s[i]));
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                v.push_back(s[i]);
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                v.push_back(s[i]);
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != v[v.size() - 1 - i])
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

int main(int argc, char *argv[])
{
    string s = "A man, a plan, a canal: Panama";
    Solution ans;
    bool res = ans.isPalindrome(s);
    cout << res << endl;
    return 0;
}