/*
 * @Author: PureDeep
 * @Date: 1970-01-01 08:00:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-22 11:01:27
 * @FilePath: /LeetCode/435.无重叠区间.cpp
 */
/*
 * @lc app=leetcode.cn id=435 lang=cpp
 *
 * [435] 无重叠区间
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// @lc code=start
class Solution
{
public:
    bool isSmaller(vector<int> a, vector<int> b)
    {
        return a[1] < b[1];
    }
    //is a in b?
    bool isIn(vector<int> a, vector<int> b)
    {
        if ((a[0] < b[0] && a[0] >= b[0]) || (a[1] >= b[1] && a[1] < b[1]))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        int size = intervals.size();
        if (size == 0)
        {
            return 0;
        }
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {
            return a[1] < b[1];
        });
        int total = 0, prev = intervals[0][1];
        for (int i = 1; i < size; ++i)
        {
            if (intervals[i][0] < prev)
            {
                ++total;
            }
            else
            {
                prev = intervals[i][1];
            }
        }
        return total;
    }
};
// @lc code=end
