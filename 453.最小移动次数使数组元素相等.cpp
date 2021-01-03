/*
 * @Author: PureDeep
 * @Date: 2020-09-21 13:38:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-21 13:50:36
 * @FilePath: \LeetCode_Cpp\453.最小移动次数使数组元素相等.cpp
 */
/*
 * @lc app=leetcode.cn id=453 lang=cpp
 *
 * [453] 最小移动次数使数组元素相等
 */
#include <vector>
#include <algorithm>
using namespace std;

// @lc code=start
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int min = nums[0];
        for(auto i: nums) {
            ans += i - min;
        }
        return ans;
    }
};
// @lc code=end

