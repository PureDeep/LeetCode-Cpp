/*
 * @Author: PureDeep
 * @Date: 2020-10-23 20:08:14
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-23 21:36:40
 * @FilePath: \LeetCode\234.回文链表.cpp
 */
/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
 */
#include <stdio.h>
#include <vector>
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
    ListNode *temp;

    bool dfs(ListNode *head)
    {
        if (head == NULL)
            return true;
        bool res = dfs(head->next) && temp->val == head->val;
        temp = temp->next;
        return res;
    }

    bool isPalindrome(ListNode *head)
    {
        // if (head == NULL)
        // {
        //     return true;
        // }
        // vector<int> list;
        // ListNode *p1 = head;
        // ListNode *p2 = head;
        // while (p1 != NULL || p1->next != NULL)
        // {
        //     list.push_back(p1->val);
        //     if (p1->next != NULL)
        //     {
        //         p1 = p1->next;
        //     }
        // }
        // for (int i = list.size(); i > 0; i--)
        // {
        //     if (list[i] != p2->val)
        //     {
        //         return false;
        //     }
        //     if (p2->next != NULL)
        //     {
        //         p2 = p2->next;
        //     }
        // }
        // return true;
        if (head == NULL || head->next == NULL)
            return true;
        temp = head;
        return dfs(head);
    }
};
// @lc code=end

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    Solution res;
    cout << res.isPalindrome(head) << endl;
    return 0;
}