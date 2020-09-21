/*
 * @Author: PureDeep
 * @Date: 2020-09-18 16:00:21
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-18 17:01:03
 * @FilePath: \LeetCode\274.h-指数.cpp
 */
/*
 * @lc app=leetcode.cn id=274 lang=cpp
 *
 * [274] H 指数
 */
#include <vector>
#include <algorithm>
using namespace std;

// @lc code=start
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        for(int i = 0; i < citations.size(); i++) {
            int h = citations.size() - i;if(h <= citations[i]){
                return h;
            }
        }
        return 0;
    }
};
// @lc code=end

