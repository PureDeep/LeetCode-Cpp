/*
 * @Author: PureDeep
 * @Date: 2020-11-28 14:51:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-28 15:31:15
 * @FilePath: \LeetCode\455.分发饼干.cpp
 */
/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// @lc code=start
class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count = 0;
        vector<int>::iterator i = g.begin();
        vector<int>::iterator j = s.begin();
        for (; i != g.end(); ++i)
        {
            while (j != s.end())
            {
                if (*i <= *j)
                {
                    ++count;
                    ++j;
                    break;
                }
                else
                {
                    ++j;
                }
            }
        }
        return count;
    }
};
// @lc code=end

int main(int argc, char *argv[])
{
    vector<int> g = {1, 2, 3};
    vector<int> s = {1, 1};
    Solution ans;
    cout << ans.findContentChildren(g, s) << endl;
    return 0;
}