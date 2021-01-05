/*
 * @Author: PureDeep
 * @Date: 1970-01-01 00:00:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2021-01-05 03:21:06
 * @FilePath: /LeetCode/406.根据身高重建队列.cpp
 */
/*
 * @lc app=leetcode.cn id=406 lang=cpp
 *
 * [406] 根据身高重建队列
 */
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

// @lc code=start
class Solution
{
public:
    // bool cmp(const vector<int> &lhs, const vector<int> &rhs)
    // {
    //     return lhs[0] == rhs[0] ? lhs[1] <= rhs[1] : lhs[0] > rhs[0];
    // }

    vector<vector<int>> reconstructQueue(vector<vector<int>> &people)
    {
        sort(people.begin(), people.end(),
             [](const vector<int> &lhs, const vector<int> &rhs) { return lhs[0] == rhs[0] ? lhs[1] <= rhs[1] : lhs[0] > rhs[0]; });
        int len = people.size();
        list<vector<int>> tmp;
        // 循环插入
        for (int i = 0; i < len; ++i)
        {
            auto pos = tmp.begin();
            advance(pos, people[i][1]);
            tmp.insert(pos, people[i]);
        }
        // 重建vector返回
        return vector<vector<int>>(tmp.begin(), tmp.end());
    }
};
// @lc code=end

int main(int argc, char *argv[])
{

    return 0;
}