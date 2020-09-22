/*
 * @Author: PureDeep
 * @Date: 2020-09-22 07:59:28
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-22 16:35:16
 * @FilePath: \LeetCode_Cpp\665.非递减数列.cpp
 */
/*
 * @lc app=leetcode.cn id=665 lang=cpp
 *
 * [665] 非递减数列
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool checkPossibility(vector<int> &nums)
    {
        int sum = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] > nums[i])
            {
                sum++;
                if (sum >= 2)
                    return false;
                if (i - 2 >= 0 && nums[i - 2] > nums[i])
                {
                    nums[i] = nums[i - 1];
                }
                else
                    nums[i - 1] = nums[i];
            }
        }
        return true;
    }
};
// @lc code=end
