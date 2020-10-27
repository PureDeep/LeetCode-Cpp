/*
 * @Author: PureDeep
 * @Date: 2020-10-24 11:01:45
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-24 23:50:15
 * @FilePath: \LeetCode\1024.视频拼接.cpp
 */
/*
 * @lc app=leetcode.cn id=1024 lang=cpp
 *
 * [1024] 视频拼接
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    static const int N = 1e2 + 5;
    int len;

    struct Node
    {
        int start, end;
        bool operator<(const Node &rhs) const
        {
            if (start == rhs.start)
                return end < rhs.end;
            return start < rhs.start;
        }
    } A[N];

    int videoStitching(vector<vector<int>> &clips, int T)
    {
        for (int i = 0; i < clips.size(); ++i)
        {
            A[i + 1].start = clips[i][0];
            A[i + 1].end = clips[i][1];
        }
        len = clips.size();
        std::sort(A + 1, A + 1 + len);
        int R = 0, tmp_R = 0, cnt = 0;
        for (int i = 1; i <= len; ++i)
        {
            if (A[i].start <= R)
            {
                tmp_R = std::max(tmp_R, A[i].end);
            }
            else
            {
                if (A[i].start > tmp_R)
                    break;
                ++cnt;
                R = tmp_R;
                --i;
            }
            if (R >= T)
                break;
        }
        // 考虑结尾处
        if (tmp_R > R)
            ++cnt, R = tmp_R;
        if (R >= T)
            return cnt;
        else
            return -1;
    }
};
// @lc code=end
