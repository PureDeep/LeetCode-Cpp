/*
 * @Author: PureDeep
 * @Date: 2020-10-18 15:29:04
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-18 16:35:21
 * @FilePath: \LeetCode\19.删除链表的倒数第n个节点.cpp
 */
/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第N个节点
 */
using namespace std;

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
    int cur = 0;

    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        // if (head == nullptr)
        // {
        //     return nullptr;
        // }
        // int count = 0;
        // ListNode *first = head;
        // ListNode *last = head;
        // while (last->next != nullptr || count < n)
        // {
        //     last = last->next;
        //     count++;
        // }
        // if (last->next == nullptr)
        // {
        //     head = head->next;
        //     return head;
        // }
        // while (last->next != nullptr)
        // {
        //     last = last->next;
        //     first = first->next;
        // }
        // first->next = first->next->next;
        // return head;

        if (!head)
            return nullptr;
        head->next = removeNthFromEnd(head->next, n);
        cur++;
        if (n == cur)
            return head->next;
        return head;
    }
};
// @lc code=end
