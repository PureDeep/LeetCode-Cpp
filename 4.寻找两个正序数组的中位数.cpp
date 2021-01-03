/*
 * @Author: PureDeep
 * @Date: 2020-10-31 12:17:27
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-31 15:25:53
 * @FilePath: \LeetCode\4.寻找两个正序数组的中位数.cpp
 */
/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */
using namespace std;
#include <iostream>
#include <vector>
#include <limits.h>

//@lc code = start
class Solution
{
public:
    int findKthElem(vector<int> &nums1, int begin1, vector<int> &nums2, int begin2, int k)
    {
        //    	cout << "k: " << k<< endl;
        if (begin1 >= nums1.size())
        {
            return nums2[begin2 + k - 1];
        }
        if (begin2 >= nums2.size())
        {
            return nums1[begin1 + k - 1];
        }
        if (k == 1)
        {
            return min(nums1[begin1], nums2[begin2]);
        }
        //        int mid1 = (begin1 + k / 2 - 1) < nums1.size() ? nums1[begin1 + k / 2 - 1] : nums1[nums1.size() - 1];
        //        int mid2 = (begin2 + k / 2 - 1) < nums2.size() ? nums2[begin2 + k / 2 - 1] : nums2[nums2.size() - 1];
        int mid1 = 0;
        int mid2 = 0;

        if (begin1 + k / 2 - 1 < nums1.size())
        {
            mid1 = begin1 + k / 2 - 1;
        }
        else
        {
            mid1 = nums1.size() - 1;
        }

        if (begin2 + k / 2 - 1 < nums2.size())
        {
            mid2 = begin2 + k / 2 - 1;
        }
        else
        {
            mid2 = nums2.size() - 1;
        }
        //		cout << "mid1: " << mid1 << " ";
        //		cout << "mid2: " << mid2 << endl;
        if (nums1[mid1] < nums2[mid2])
        {
            //        	cout<<"mid1+1:"<<mid1+1<<" mid2:"<<mid2<<endl;
            return findKthElem(nums1, mid1 + 1, nums2, begin2, k - (mid1 - begin1 + 1));
        }
        //        cout<<"mid1:"<<mid1<<" mid2+1:"<<mid2+1<<endl;
        return findKthElem(nums1, begin1, nums2, mid2 + 1, k - (mid2 - begin2 + 1));
    }

    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int len1 = nums1.size();
        int len2 = nums2.size();
        int total = len1 + len2;
        int left = (total + 1) / 2;
        int right = (total + 2) / 2;
        //        cout << "left: " << left << " " << "right: " << right << endl;
        double result1 = findKthElem(nums1, 0, nums2, 0, left);
        double result2 = findKthElem(nums1, 0, nums2, 0, right);
        cout << "result1: " << result1 << endl;
        cout << "result2: " << result2 << endl;
        return (result1 + result2) / 2;
    }
};
// @lc code=end

// int main()
// {
//     vector<int> nums1 = {1, 2, 3, 4, 5};
//     vector<int> nums2 = {6, 7, 8};
//     double result = findMedianSortedArrays(nums1, nums2);
//     cout << result << endl;
//     return 0;
// }