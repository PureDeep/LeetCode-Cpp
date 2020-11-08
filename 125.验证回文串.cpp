/*
 * @Author: PureDeep
 * @Date: 2020-11-03 15:33:11
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-03 16:37:14
 * @FilePath: \LeetCode\125.验证回文串.cpp
 */
/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */
using namespace std;
#include <string>
#include <iostream>

// @lc code=start
class Solution
{
public:
    char Lower(char c)
    {
        c = c + 'a' - 'A';
        return c;
    }

    // char Upper(char c)
    // {
    //     c = c - 'a' + 'A';
    // }

    bool isPalindrome(string s)
    {
        if (s == "")
        {
            return true;
        }
        int i = 0, j = s.size() - 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = Lower(s[i]);
            }
        }
        cout << s << endl;
        while (i >= 0 && i < s.size())
        {
            cout << "s[" << i << "]: " << s[i] << "\t"
                 << "s[" << j << "]: " << s[j] << endl;
            while (s[i] < '0' || (s[i] > '9' && s[i] < 'A') || (s[i] > 'Z' && s[i] < 'a') || s[i] > 'z')
            {
                cout << "1" << endl;
                i++;
                cout << i << endl;
            }
            while (s[j] < '0' || (s[j] > '9' && s[j] < 'A') || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
            {
                cout << "2" << endl;
                j--;
            }
            if (s[i] != s[j])
            {
                return false;
            }
            // cout << s[i] << " " << s[j] << endl;
            cout << "after: "
                 << "s[" << i << "]: " << s[i] << "\t"
                 << "s[" << j << "]: " << s[j] << endl
                 << endl;
            i++;
            j--;
        }
        return true;
    }
};
// @lc code=end

int main()
{
    string s = "A man, a plan, a canal: Panama";
    Solution ans;
    bool res = ans.isPalindrome(s);
    cout << res << endl;
    return 0;
}