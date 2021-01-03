/*
 * @Author: PureDeep
 * @Date: 1970-01-01 00:00:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2021-01-03 08:02:21
 * @FilePath: /LeetCode/763.划分字母区间.cpp
 */
/*
 * @lc app=leetcode.cn id=763 lang=cpp
 *
 * [763] 划分字母区间
 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> findEnd(string S)
    {
        vector<int> ans(26);
        int size = S.size();
        for (int i = 0; i < size; ++i)
        {
            ans[S[i] - 97] = i;
        }
        return ans;
    }

    vector<int> partitionLabels(string S)
    {
        int size = S.size();
        if (size == 0)
        {
            return vector<int>(0);
        }
        vector<int> ans;
        vector<int> charEnd = findEnd(S);

        for (auto c : charEnd)
        {
            cout << c << " ";
        }
        cout << endl;

        int start = 0;
        int end = 0;
        for (int i = 0; i < size; ++i)
        {
            if (i > end)
            {
                ans.push_back(end - start + 1);
                start = i;
            }
            if (end < charEnd[S[i] - 97])
            {
                end = charEnd[S[i] - 97];
            }
            if (i == size - 1)
            {
                ans.push_back(i - start + 1);
            }
        }
        return ans;
    }
};
// @lc code=end

int main(int argc, char *argv[])
{
    Solution ans;
    string S = "ababcbacadefegdehijhklij";
    vector<int> v = ans.partitionLabels(S);
    cout << S.size() << endl;
    cout << v.size() << endl;
    for (auto p : v)
    {
        cout << p << " ";
    }
    cout << endl;
    return 0;
}