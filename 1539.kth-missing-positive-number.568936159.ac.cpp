/*
 * @lc app=leetcode id=1539 lang=cpp
 *
 * [1539] Kth Missing Positive Number
 */

// @lc code=start
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int p = 0;
        for(int i = 1; i <= 3000; i++){
            if(p < arr.size() && arr[p] == i) ++p;
            else{
                if(--k == 0) return i;
            }
        }
        return 1000;
    }
};
// @lc code=end
