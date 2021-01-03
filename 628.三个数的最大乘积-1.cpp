/*
 * @Author: PureDeep
 * @Date: 2020-09-13 20:37:34
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-13 20:57:22
 * @FilePath: \LeetCode\628.三个数的最大乘积.cpp
 */
/*
 * @lc app=leetcode.cn id=628 lang=cpp
 *
 * [628] 三个数的最大乘积
 */
#include <vector>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int a = 0, b = 0;
        int size = nums.size();
        if(nums[0] < 0 && nums[1] < 0){
            a = nums[0] * nums[1] * nums[size - 1];
        }
        b = nums[size -1] * nums[size - 2] * nums[size - 3];
        return a > b ? a : b;
    }
};
// @lc code=end
