/*
 * @Author: PureDeep
 * @Date: 2020-11-27 13:43:39
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-29 17:42:59
 * @FilePath: \LeetCode\98.验证二叉搜索树.cpp
 */
/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
 */

#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <vector>

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
    void inOrderTraverse(TreeNode *root, vector<int> &s)
    { //递归 中序遍历并输出结果到s
        if (root != 0)
        {
            inOrderTraverse(root->left, s);
            s.push_back(root->val);
            inOrderTraverse(root->right, s);
        }
    }

    bool isValidBST(TreeNode *root)
    {
        if (root == 0)
        {
            return true;
        }
        vector<int> s;
        inOrderTraverse(root, s);
        int size = s.size();
        for (int i = 0; i < size - 1; ++i)
        { //检测中序遍历输出的数组是否单调递增
            if (s[i] >= s[i + 1])
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

int main(int argc, char *argv[])
{

    return 0;
}