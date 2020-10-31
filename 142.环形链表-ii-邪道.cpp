/*
 * @Author: PureDeep
 * @Date: 2020-10-10 21:28:26
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-10 22:04:31
 * @FilePath: \LeetCode\142.环形链表-ii.cpp
 */
/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
 */
#include <stdio.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        while (head)
        {
            if (!less<ListNode *>()(head, head->next))
            {
                return head->next;
            }
            else
            {
                head = head->next;
            }
        }
        return nullptr;
    }
};
// @lc code=end
