/*
 * @Author: PureDeep
 * @Date: 2020-09-15 17:13:11
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-15 20:18:44
 * @FilePath: \LeetCode\442.数组中重复的数据.cpp
 */
/*
 * @lc app=leetcode.cn id=442 lang=cpp
 *
 * [442] 数组中重复的数据
 */
#include <vector>
#include <algorithm>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        if(nums.empty())
            return ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int index = (nums[i] - 1) % n;
            nums[index] += n;
        }
        for(int i = 0; i < n; i++){
            if(nums[i] > 2*n)
                ans.push_back(i + 1);
        }
        return ans;
    }
};
// @lc code=end
