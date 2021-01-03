/*
 * @Author: PureDeep
 * @Date: 2020-10-12 13:50:54
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-12 17:02:53
 * @FilePath: \LeetCode\530.二叉搜索树的最小绝对差.cpp
 */
/*
 * @lc app=leetcode.cn id=530 lang=cpp
 *
 * [530] 二叉搜索树的最小绝对差
 */
#include <stdio.h>
#include <vector>
#include <cmath>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    vector<int> vi;
    void midOrder(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        midOrder(root->left);
        vi.push_back(root->val);
        midOrder(root->right);
    }

    int min = 99999999;

    int getMinimumDifference(TreeNode *root)
    {
        midOrder(root);
        for (int i = 1; i < vi.size(); i++)
        {
            if (vi[i] - vi[i - 1] < min)
            {
                min = vi[i] - vi[i - 1];
            }
        }
        return min;
    }
};
// @lc code=end
