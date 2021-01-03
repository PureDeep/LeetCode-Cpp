/*
 * @Author: PureDeep
 * @Date: 2020-10-31 16:22:27
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-01 22:18:16
 * @FilePath: \LeetCode\13.罗马数字转整数.cpp
 */
/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */
using namespace std;
#include <string>
#include <iostream>
#include <map>

// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> romanMap;
        romanMap['I'] = 1;
        romanMap['V'] = 5;
        romanMap['X'] = 10;
        romanMap['L'] = 50;
        romanMap['C'] = 100;
        romanMap['D'] = 500;
        romanMap['M'] = 1000;

        int result = 0;

        int size = s.size();

        for (int i = 0; i < size; i++)
        {
            if (romanMap[s[i]] < romanMap[s[i + 1]])
            {
                result -= romanMap[s[i]];
            }
            else
            {
                result += romanMap[s[i]];
            }
        }
        return result;
    }
};
// @lc code=end

int main()
{
    string s = "MCMXCIV";
    Solution ans;
    int num = ans.romanToInt(s);
    cout << num << endl;
    return 0;
}