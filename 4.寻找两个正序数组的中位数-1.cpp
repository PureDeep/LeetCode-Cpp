/*
 * @Author: PureDeep
 * @Date: 2020-10-30 19:07:02
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-31 12:25:50
 * @FilePath: \LeetCode\4.寻找两个正序数组的中位数-1.cpp
 */
/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */
using namespace std;
#include <iostream>
#include <vector>

// @lc code=start
// class Solution
// {
// public:
int findKthElem(vector<int> &nums1, int begin1, int end1, vector<int> &nums2, int begin2, int end2, int k)
{

    if (begin1 > end1) //如果数组1为空，则直接返回数组2中的第k个元素
    {
        return nums2[begin1 + k - 1];
    }
    else if (begin2 > end2) //如果数组2为空，则直接返回数组1中的第k个元素
    {
        return nums1[begin2 + k - 1];
    }
    int mid1 = (begin1 + end1) / 2;
    int mid2 = (begin2 + end2) / 2;
    if (nums1[mid1] < nums2[mid2])
    {
        if (mid1 - begin1 + 1 + mid2 - begin2 + 1 > k) //如果k小于数组1和数组2长度和的一半，那么第k个数一定不在数组2的右半边（我们在主函数中将数组2定为更长的数组）
        {
            return findKthElem(nums1, begin1, end1, nums2, begin2, mid2 - 1, k);
        }
        else
        {
            return findKthElem(nums1, mid1 + 1, end1, nums2, begin2, end2, k - (mid1 - begin1 + 1));
        }
    }
    else //nums1中点值大于nums2中点值
    {
        if (mid1 - begin1 + 1 + mid2 - begin2 + 1 > k)
        {
            return findKthElem(nums1, mid1 - 1, end1, nums2, begin2, end2, k);
        }
        else
        {
            return findKthElem(nums1, begin1, end1, nums2, mid2 + 1, end2, k - (mid2 - begin2 + 1));
        }
    }
}

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    size_t len1 = nums1.size();
    size_t len2 = nums2.size();
    if (len1 >= len2)
    {
        return findMedianSortedArrays(nums2, nums1);
    }
    int len = len1 + len2;
    if (len % 2 == 0)
    {
        int a = findKthElem(nums1, 0, len1 - 1, nums2, 0, len2 - 1, len >> 1);
        int b = findKthElem(nums1, 0, len1 - 1, nums2, 0, len2 - 1, len >> 1 + 1);
        return (a + b) >> 1;
    }
    else
    {
        return findKthElem(nums1, 0, len1 - 1, nums2, 0, len2 - 1, len >> 1);
    }
}
// };
// @lc code=end

int main()
{
    vector<int> nums1{1, 2, 3, 4, 5};
    vector<int> nums2{6, 7, 8};
    double result = findMedianSortedArrays(nums1, nums2);
    cout << result << endl;
    return 0;
}