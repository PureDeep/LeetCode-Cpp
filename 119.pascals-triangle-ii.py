#
# @lc app=leetcode id=119 lang=python3
#
# [119] Pascal's Triangle II
#
# https://leetcode.com/problems/pascals-triangle-ii/description/
#
# algorithms
# Easy (42.44%)
# Total Accepted:    193.3K
# Total Submissions: 452.6K
# Testcase Example:  '3'
#
# Given a non-negative index k where k ≤ 33, return the k^th index row of the
# Pascal's triangle.
# 
# Note that the row index starts from 0.
# 
# 
# In Pascal's triangle, each number is the sum of the two numbers directly
# above it.
# 
# Example:
# 
# 
# Input: 3
# Output: [1,3,3,1]
# 
# 
# Follow up:
# 
# Could you optimize your algorithm to use only O(k) extra space?
# 
#
class Solution:
    def getRow(self, rowIndex):
        """
    :type rowIndex: int
    :rtype: List[int]
    """
        result = []
        for i in range(1,rowIndex+2):
            # there are i elements
            result.append(1)
            for j in range(i-2,0,-1):
                result[j] += result[j-1]
        return result
"""
错误
        if rowIndex < 0 or rowIndex > 33 or isinstance(rowIndex, int) == False:
            raise Exception("请输入一个小于等于33的非负整数")
        else:
            L = [1]
            n = 0
            while n < rowIndex:
                L = [1] + [L[i] + L[i + 1] for i in range(len(L) - 1)] + [1]
            return L
"""

