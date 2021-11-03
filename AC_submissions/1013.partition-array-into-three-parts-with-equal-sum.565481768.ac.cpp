/*
 * @lc app=leetcode id=1013 lang=cpp
 *
 * [1013] Partition Array Into Three Parts With Equal Sum
 */

// @lc code=start
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;
        for(auto x : arr) sum += x;
        if(sum % 3) return false;
        sum /= 3;
        int ctr = 0;
        int acc = 0;
        for(auto x : arr){
            acc += x;
            // if(acc > sum) return false;
            if(acc == sum){
                ctr++;
                acc = 0;
            }
        }
        return ctr >= 3;
    }
};
// @lc code=end
