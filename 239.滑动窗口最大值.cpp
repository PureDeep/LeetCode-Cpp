/*
 * @Author: PureDeep
 * @Date: 1970-01-01 00:00:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2021-01-02 07:41:44
 * @FilePath: /LeetCode/239.滑动窗口最大值.cpp
 */
/*
 * @lc app=leetcode.cn id=239 lang=cpp
 *
 * [239] 滑动窗口最大值
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> ans;
        int size = nums.size();
        int que[size];
        int hh = 0, tt = -1;
        ans.reserve(size);
        for (int i = 0; i < size; ++i)
        {
            if (hh <= tt && i - k + 1 > que[hh])
                ++hh;
            while (hh <= tt && nums[i] > nums[que[tt]])
                --tt;
            que[++tt] = i;
            if (i >= k - 1)
                ans.push_back(nums[que[hh]]);
        }
        return ans;
    }
};
// @lc code=end

int main(int argc, char *argv[])
{
    Solution ans;
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    vector<int> big = ans.maxSlidingWindow(nums, 3);
    for (auto p : big)
    {
        cout << p << " " << endl;
    }
    return 0;
}