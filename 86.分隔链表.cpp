/*
 * @Author: PureDeep
 * @Date: 1970-01-01 00:00:00
 * @LastEditors: PureDeep
 * @LastEditTime: 2021-01-03 09:27:42
 * @FilePath: /LeetCode/86.分隔链表.cpp
 */
/*
 * @lc app=leetcode.cn id=86 lang=cpp
 *
 * [86] 分隔链表
 */

#include <iostream>

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
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *lowHead = new ListNode(0);
        ListNode *highHead = new ListNode(0);
        ListNode *low = lowHead;
        ListNode *high = highHead;
        while (head != NULL)
        {
            if (head->val < x)
            {
                low->next = head;
                low = low->next;
            }
            else
            {
                high->next = head;
                high = high->next;
            }
            head = head->next;
        }
        high->next = NULL;
        low->next = highHead->next;
        return lowHead->next;
    }
};
// @lc code=end

int main(int argc, char *argv[])
{

    return 0;
}