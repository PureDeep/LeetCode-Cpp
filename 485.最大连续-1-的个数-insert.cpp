/*
 * @Author: PureDeep
 * @Date: 2020-09-12 11:25:33
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-12 15:52:13
 * @FilePath: \LeetCode\485.最大连续-1-的个数-insert.cpp
 */
/*
 * @lc app=leetcode.cn id=485 lang=cpp
 *
 * [485] 最大连续1的个数
 */
#include<vector>

using namespace std;

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        nums.insert(nums.begin(), 0);  //insert 0 at the beginning of nums
        nums.insert(nums.end(), 0);    //insert 0 at the end of nums
        int fast = 0, slow = 0;
        int ans = 0;
        for(; fast < nums.size(); fast++){
            if(nums[fast] == 0){
                if(fast - slow -1 > ans){
                    ans = fast - slow - 1;
                }
                slow = fast;
            }
        }
        return ans;
    }
};
// @lc code=end