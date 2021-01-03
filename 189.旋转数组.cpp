/*
 * @Author: PureDeep
 * @Date: 2020-09-24 11:48:15
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-24 16:21:28
 * @FilePath: \LeetCode\189.旋转数组.cpp
 */
/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组
 */
#include <vector>
#include <algorithm>
using namespace std;

// @lc code=start

class Solution
{
public:
    template <class BidirectionalIterator>
    void reverse(BidirectionalIterator first, BidirectionalIterator last)
    {
        while ((first != last) && (first != --last))
        {
            std::iter_swap(first, last);
            ++first;
        }
    }
    void rotate(vector<int> &nums, int k)
    {
        reverse(nums.begin(), nums.end() - k % nums.size());
        reverse(nums.end() - k % nums.size(), nums.end());
        reverse(nums.begin(), nums.end());
    }
};
// @lc code=end
