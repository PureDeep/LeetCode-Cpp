/*
 * @lc app=leetcode.cn id=605 lang=csharp
 *
 * [605] 种花问题
 */

// @lc code=start
public class Solution {
    public bool CanPlaceFlowers(int[] flowerbed, int n) {
        int size = flowerbed.Length;
        int count = 0;
        int prev = -2;
         for (int i = 0; i < size; ++i)
        {
            if (i - prev > 1 && flowerbed[i] == 0)
            {
                flowerbed[i] = 1;
                ++count;
                prev = i;
            }
            else if (flowerbed[i] == 1)
            {
                if (i - prev == 1)
                {
                    flowerbed[prev] = 0;
                    --count;
                }
                prev = i;
            }
        }
        if (count >= n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
// @lc code=end

