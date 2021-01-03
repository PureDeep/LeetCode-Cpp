/*
 * @Author: PureDeep
 * @Date: 2020-10-27 20:46:35
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-27 21:35:46
 * @FilePath: \LeetCode\144.二叉树的前序遍历.cpp
 */
/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
 */
using namespace std;
#include <vector>
#include <stack>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        stack<TreeNode *> s;
        s.push(root);
        while (!s.empty())
        {
            TreeNode *r = s.top();
            s.pop();
            if (!r)
                continue;
            ans.push_back(r->val);
            s.push(r->right);
            s.push(r->left);
        }
        return ans;
    }
};
// @lc code=end
