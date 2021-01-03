/*
 * @Author: PureDeep
 * @Date: 2020-10-21 10:25:14
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-21 23:01:56
 * @FilePath: \LeetCode\925.长按键入.cpp
 */
/*
 * @lc app=leetcode.cn id=925 lang=cpp
 *
 * [925] 长按键入
 */
#include <string>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool isLongPressedName(string name, string typed)
    {
        // int count1 = 0;
        // int count2 = 0;
        // char tmp1 = name[0];
        // char tmp2 = typed[0];
        // int cur2 = 0;
        // for (int i = 0; i < name.length(); i++)
        // {
        //     if (tmp1 == name[i])
        //     {
        //         count1++;
        //     }
        //     else
        //     {
        //         for (int j = cur2; j < typed.length(); j++)
        //         {
        //             if (tmp2 == typed[j])
        //             {
        //                 count2++;
        //             }
        //             else
        //             {
        //                 if (count2 >= count1)
        //                 {
        //                     count1 = 0;
        //                     count2 = 0;
        //                     cur2 = j;
        //                     tmp1 = typed[i];
        //                     tmp2 = typed[j];
        //                     i--;
        //                 }
        //                 else
        //                 {
        //                     return false;
        //                 }
        //             }
        //         }
        //     }
        // }
        // return true;
        int i = 0, j = 0;
        while (i < name.length() && j < typed.length())
        {
            if (name[i] == typed[j])
            {
                i++;
                j++;
            }
            else
            {
                if (j == 0)
                {
                    return false;
                }
                while (j < typed.length() && typed[j] == typed[j - 1])
                {
                    j++;
                }
                if (name[i] == typed[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    return false;
                }
            }
        }
        if (i < name.length())
            return false;
        if (j < typed.length())
        {
            while (j < typed.length())
            {
                if (typed[j] == typed[j - 1])
                {
                    j++;
                }
                else
                    return false;
            }
        }
        return true;
    }
};
// @lc code=end
