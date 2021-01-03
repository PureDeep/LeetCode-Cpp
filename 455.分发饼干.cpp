/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */
#pragma GCC diagnostic error "-std=c++11"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// @lc code=start
class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, j = 0;
        while (i < g.size() && j < s.size())
        {
            if (g[i] <= s[j])
            {
                ++i;
            }
            ++j;
        }
        return i;
    }
};
// @lc code=end

int main()
{
    vector<int> g{1, 2, 3};
    vector<int> s{1, 1};
    Solution ans;
    cout << ans.findContentChildren(g, s) << endl;

    return 0;
}