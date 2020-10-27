/*
 * @Author: PureDeep
 * @Date: 2020-10-20 07:51:18
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-20 14:57:07
 * @FilePath: \LeetCode\143.重排链表.cpp
 */
/*
 * @lc app=leetcode.cn id=143 lang=cpp
 *
 * [143] 重排链表
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *reverse(ListNode *head) //倒转链表
    {
        ListNode *p1 = nullptr;
        ListNode *p2 = head;
        ListNode *p3 = p2;

        while (p2)
        {
            p3 = p2->next;
            p2->next = p1;
            p1 = p2;
            p2 = p3;
        }

        return p1;
    }

    void reorderList(ListNode *head)
    {
        // if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
        // {
        //     return;
        // }
        // ListNode *tail = head;
        // for (; tail->next != nullptr; tail = tail->next)
        // {
        // }
        // ListNode *tmp = head->next;
        // head->next = tail;
        // tail->next = tmp;
        // reorderList(head->next->next);
        if (head == nullptr || head->next == nullptr)
        {
            return;
        }

        ListNode *fast = head;
        ListNode *slow = head;

        while (fast->next->next && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode *needReverse = slow->next;
        slow->next = nullptr;

        needReverse = reverse(needReverse);

        ListNode *cur = head;
        // ListNode *curSecond = needReverse;

        // while (cur && curSecond)
        // {
        //     ListNode *curNext = cur->next;
        //     ListNode *curSecondNext = curSecond->next;
        //     cur->next = curSecond;
        //     curSecond->next = curNext;
        //     cur = curNext;
        //     curSecond = curSecondNext;
        //     curNext = cur->next;
        //     curSecondNext = curSecond->next;
        // }
        while (cur && needReverse)
        {
            ListNode *curSecond = needReverse;
            needReverse = needReverse->next;
            ListNode *nextCur = cur->next;
            curSecond->next = cur->next;
            cur->next = curSecond;

            cur = nextCur;
        }
    }
};
// @lc code=end