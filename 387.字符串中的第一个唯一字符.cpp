/*
 * @Author: PureDeep
 * @Date: 2020-11-23 11:14:19
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-27 20:50:14
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
#include <vector>

using namespace std;

// @lc code=start
class Solution
{
public:
    int firstUniqChar(string s)
    {
        vector<int> count(26, 0);
        for (int i = 0; i < s.size(); ++i)
        {
            count[s.at(i) - 'a']++;
        }

        // for (int i = 0; i < s.size(); ++i)
        // {
        //     cout << s.at(i) << " " << count[s.at(i) - 'a'] << endl;
        // }

        for (int i = 0; i < s.size(); ++i)
        {
            if (count[s.at(i) - 'a'] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end

int main(int argc, char *argv[])
{
    Solution ans;
    string s = "leetcode";
    cout << ans.firstUniqChar(s) << endl;
    s = "loveleetcode";
    cout << ans.firstUniqChar(s) << endl;
    return 0;
}