/*
 * @Author: PureDeep
 * @Date: 2020-11-23 11:14:19
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-23 13:38:15
 * @FilePath: \LeetCode\387.字符串中的第一个唯一字符.cpp
 */
/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <string>
#include <map>

using namespace std;

// @lc code=start
class Solution
{
public:
    int firstUniqChar(string s)
    {
        int size = s.size();
        map<char, int> charNums;
        for (int i = 0; i < size; i++)
        {
            charNums[s[i]] = 0;
        }
        map<char, int>::iterator it;
        for (it = charNums.begin(); it != charNums.end(); it++)
        {
            if (it->second == 0)
            {
                for (int i = 0; i < size; ++i)
                {
                    if (it->first == s[i])
                    {
                        return i;
                    }
                }
            }
        }
        for (it = charNums.begin(); it != charNums.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        }
    }
};
// @lc code=end

int main(int argc, char *argv[])
{
    Solution ans;
    string s = "leetcode";
    cout << ans.firstUniqChar(s) << endl;
    return 0;
}