/*
 * @Author: PureDeep
 * @Date: 1970-01-01 00:00:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2021-01-02 03:41:59
 * @FilePath: /LeetCode/452.用最少数量的箭引爆气球.cpp
 */
/*
 * @lc app=leetcode.cn id=452 lang=cpp
 *
 * [452] 用最少数量的箭引爆气球
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// @lc code=start
class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        int size = points.size();
        if (size == 0)
            return 0;
        sort(points.begin(), points.end());
        int count = 1;
        int prevEnd = points[0][1];
        for (int i = 1; i < points.size(); ++i)
        {
            int flag = 0;
            if (points[i][0] <= prevEnd)
            {
                flag = 1;
                if (points[i][1] <= prevEnd)
                {
                    prevEnd = points[i][1];
                }
            }
            else
            {
                prevEnd = points[i][1];
                flag = 0;
            }
            if (flag == 0)
            {
                ++count;
            }
        }
        return count;
    }
};
// @lc code=end

int main(int argc, char *argv[])
{
    Solution ans;
    vector<vector<int>> points = {{10, 16}, {2, 8}, {1, 6}, {7, 12}};
    ans.findMinArrowShots(points);
    for (auto p : points)
    {
        cout << p[0] << " " << p[1] << endl;
    }
    cout << ans.findMinArrowShots(points) << endl;
    return 0;
}