/*
 * @Author: PureDeep
 * @Date: 2020-09-15 08:53:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-15 11:42:09
 * @FilePath: \LeetCode\697.数组的度.cpp
 */
/*
 * @lc app=leetcode.cn id=697 lang=cpp
 *
 * [697] 数组的度
 */
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

// @lc code=start
class Solution
{
public:
    int findShortestSubArray(vector<int> &nums)
    {
        unordered_map<int, vector<int>> um;
        for (int i = 0; i < nums.size(); i++)
        {
            um[nums[i]].push_back(i);
        }
        int nums_du = 0, minlen;
        for (auto i : um)
        {
            int size = i.second.size();
            if (size >= nums_du)
            {
                int temp = i.second[size - 1] - i.second[0] + 1;
                if (size > nums_du)
                {
                    nums_du = size;
                    minlen = temp;
                }
                else
                    minlen = min(minlen, temp);
            }
        }
        return minlen;
    }
};
// @lc code=end
