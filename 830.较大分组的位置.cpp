/*
 * @Author: PureDeep
 * @Date: 1970-01-01 00:00:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2021-01-05 04:30:34
 * @FilePath: /LeetCode/830.较大分组的位置.cpp
 */
/*
 * @lc app=leetcode.cn id=830 lang=cpp
 *
 * [830] 较大分组的位置
 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<vector<int>> largeGroupPositions(string s)
    {
        vector<vector<int>> ans;
        int size = s.size();

        // for (auto p : ans)
        // {
        //     cout << p[0] << " " << p[1] << endl;
        // }
        // cout << endl;

        if (size == 0)
        {
            return ans;
        }
        int start = 0;
        int end = 0;
        int count = 0;
        char tmp = s[0];
        int flag = 0;
        for (int i = 0; i < size; ++i)
        {
            // cout << s[i] << endl;
            if (s[i] == tmp && flag == 0)
            {
                ++count;
                flag = 1;
                start = i;
            }
            else if (s[i] == tmp && flag == 1 && i < size - 1)
            {
                ++count;
            }
            else if (s[i] != tmp)
            {
                end = i - 1;

                if (count >= 3)
                {
                    vector<int> tmpK{start, end};

                    // for (auto p : tmpK)
                    // {
                    //     cout << p << " ";
                    // }
                    // cout << endl;

                    ans.push_back(tmpK);
                    tmp = s[i];
                    start = i;
                    count = 1;
                }
                else
                {
                    tmp = s[i];
                    start = i;
                    count = 1;
                }
            }
            else if (i == size - 1 && s[i] == tmp && flag == 1)
            {
                ++count;
                if (count >= 3)
                {
                    end = i;
                    vector<int> tmpK{start, end};
                    ans.push_back(tmpK);
                }
            }
        }
        return ans;
    }
};
// @lc code=end

int main(int argc, char *argv[])
{
    string s = "abbxxxxzzy";
    Solution ans;
    vector<vector<int>> K = ans.largeGroupPositions(s);

    for (auto p : K)
    {
        cout << p[0] << " " << p[1] << endl;
    }
    cout << endl;

    return 0;
}