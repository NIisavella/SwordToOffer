 /**
  * Author: Jennie
  * Source: https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof/
  * Description: 在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。
  * 数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。
  * 请找出数组中任意一个重复的数字。
  */

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_map<int, int> dict;
        for (auto i : nums) {
            dict[i]++;
            if (dict[i] > 1) {
                return i; // use hash table to record occurrence
            }
        }
        return 0;
    }
};

