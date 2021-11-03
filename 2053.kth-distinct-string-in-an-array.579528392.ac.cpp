/*
 * @lc app=leetcode id=2053 lang=cpp
 *
 * [2053] Kth Distinct String in an Array
 */

// @lc code=start
class Solution {
public:
    unordered_map<string,int>mp;
    string kthDistinct(vector<string>& arr, int k) {
        for(auto str : arr) mp[str]++;
        for(auto str : arr){
            if(mp[str] > 1) continue;
            if(--k == 0) return str;
        }
        return "";
    }
};
// @lc code=end
