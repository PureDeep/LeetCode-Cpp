/*
 * @Author: PureDeep
 * @Date: 2020-11-20 10:48:30
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-20 11:17:54
 * @FilePath: \LeetCode\557.反转字符串中的单词-iii.cpp
 */
/*
 * @lc app=leetcode.cn id=557 lang=cpp
 *
 * [557] 反转字符串中的单词 III
 */

#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <string>
using namespace std;

// @lc code=start
class Solution
{
public:
    void reverseString(string &s, int begin, int end)
    {
        int size = end - begin + 1;
        for (int i = 0; i < size / 2; ++i)
        {
            int tmp = s[begin + i];
            s[begin + i] = s[begin + size - 1 - i];
            s[begin + size - 1 - i] = tmp;
        }
    }

    string reverseWords(string s)
    {
        string sCopy = s;
        int size = sCopy.size();
        int start = 0;
        // int flag1 = 0;
        int flag2 = 0; //character
        for (int i = 0; i < size; ++i)
        {
            if (sCopy[i] != ' ' && flag2 == 0)
            {
                start = i;
                flag2 = 1;
            }
            else if (sCopy[i] == ' ' && flag2 == 1)
            {
                reverseString(sCopy, start, i - 1);
                // flag1 = 1;
                flag2 = 0;
            }
            else if (i == size - 1 && flag2 == 1)
            {
                reverseString(sCopy, start, i);
            }
        }
        return sCopy;
    }
};
// @lc code=end

int main(int argc, char *argv[])
{

    return 0;
}