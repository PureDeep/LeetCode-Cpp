/*
 * @lc app=leetcode.cn id=628 lang=cpp
 *
 * [628] 三个数的最大乘积
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        int max1 = -1000;
        int max2 = -1000;
        int max3 = -1000;

        int min1 = 1000;
        int min2 = 1000;

        if (nums.size() == 3)
        {
            return nums[0] * nums[1] * nums[2];
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }
            else if (nums[i] >= max2 && nums[i] < max1)
            {
                max3 = max2;
                max2 = nums[i];
            }
            else if (nums[i] >= max3 && nums[i] < max2)
            {
                max3 = nums[i];
            }

            if (nums[i] <= min1)
            {
                min2 = min1;
                min1 = nums[i];
            }
            else if (nums[i] > min1 && nums[i] <= min2)
            {
                min2 = nums[i];
            }
        }

        int a = min1 * min2 * max1;
        int b = max1 * max2 * max3;
        return a > b ? a : b;
    }
};
// @lc code=end
