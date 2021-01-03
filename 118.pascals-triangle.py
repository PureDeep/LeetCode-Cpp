#
# @lc app=leetcode id=118 lang=python3
#
# [118] Pascal's Triangle
#
# https://leetcode.com/problems/pascals-triangle/description/
#
# algorithms
# Easy (44.92%)
# Total Accepted:    239.2K
# Total Submissions: 529.2K
# Testcase Example:  '5'
#
# Given a non-negative integer numRows, generate the first numRows of Pascal's
# triangle.
# 
# 
# In Pascal's triangle, each number is the sum of the two numbers directly
# above it.
# 
# Example:
# 
# 
# Input: 5
# Output:
# [
# ⁠    [1],
# ⁠   [1,1],
# ⁠  [1,2,1],
# ⁠ [1,3,3,1],
# ⁠[1,4,6,4,1]
# ]
# 
# 
#
class Solution:
    def generate(self, numRows):
        L = [1]
        n = 0
        res = []
        while n < numRows:
            res.append(L)
            L = [1] + [L[i] + L[i + 1] for i in range(len(L) - 1)] + [1]
            n += 1
        return res
