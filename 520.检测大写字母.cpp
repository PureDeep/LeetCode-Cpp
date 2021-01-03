/*
 * @Author: PureDeep
 * @Date: 2020-11-03 11:25:54
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-03 12:31:17
 * @FilePath: \LeetCode\520.检测大写字母.cpp
 */
/*
 * @lc app=leetcode.cn id=520 lang=cpp
 *
 * [520] 检测大写字母
 */
using namespace std;
#include <string>
#include <iostream>

// @lc code=start
class Solution
{
public:
    bool isUpper(char s)
    {
        if (s >= 'A' && s <= 'Z')
            return true;
        else
            return false;
    }

    bool detectCapitalUse(string word)
    {
        int count = 0;
        bool isFirst = false;
        for (int i = 0; i < word.size(); i++)
        {
            if (isUpper(word[i]))
            {
                count++;
                if (i == 0)
                {
                    isFirst = true;
                }
            }
        }
        if (count == 0)
        {
            return true;
        }
        else if (count == 1 && isFirst)
        {
            return true;
        }
        else if (count == word.size())
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

int main()
{
    string word;
    getline(cin, word);
    Solution ans;
    bool res = ans.detectCapitalUse(word);
    cout << res << endl;
    return 0;
}