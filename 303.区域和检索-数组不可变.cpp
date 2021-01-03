/*
 * @Author: PureDeep
 * @Date: 2020-10-25 10:18:26
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-25 10:49:44
 * @FilePath: \LeetCode\303.区域和检索-数组不可变.cpp
 */
/*
 * @lc app=leetcode.cn id=303 lang=cpp
 *
 * [303] 区域和检索 - 数组不可变
 */
using namespace std;
#include <vector>

// @lc code=start
class NumArray
{
public:
    NumArray(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            depots.push_back(nums[i]);
        }
    }

    int sumRange(int i, int j)
    {
        int sum = 0;
        for (int p = i; p <= j; p++)
        {
            sum += depots[p];
        }
        return sum;
    }

private:
    vector<int> depots;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
// @lc code=end
