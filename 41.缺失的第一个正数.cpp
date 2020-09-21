/*
 * @Author: PureDeep
 * @Date: 2020-09-16 16:03:50
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-17 18:58:59
 * @FilePath: \LeetCode\41.缺失的第一个正数.cpp
 */
/*
 * @lc app=leetcode.cn id=41 lang=cpp
 *
 * [41] 缺失的第一个正数
 */
#include <vector>
#include <algorithm>
using namespace std;

// @lc code=start
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 1;
        for(int i=0;i<n;i++){
            while(nums[i]>0 && nums[i]<n && nums[i]!=nums[nums[i]])//注意此处应为while循环，而不是if
                swap(nums[i],nums[nums[i]]);// 把num[i]放在第num[i]位置上
        }
        for(int i=1;i<n;i++){
            if(nums[i]!=i)
                return i;
        }
        return nums[0]==n?n+1:n;
    }
};
// @lc code=end