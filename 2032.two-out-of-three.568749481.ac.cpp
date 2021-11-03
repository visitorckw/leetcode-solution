/*
 * @lc app=leetcode id=2032 lang=cpp
 *
 * [2032] Two Out of Three
 */

// @lc code=start
class Solution {
public:
    unordered_map<int, int> table;
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>res;
        unordered_set<int> visit;
        for(auto x : nums1){
            if(!visit.count(x)){
                visit.insert(x);
                table[x]++;
            }
        }
        visit.clear();
        for(auto x : nums2){
            if(!visit.count(x)){
                visit.insert(x);
                table[x]++;
            }
        }
        visit.clear();
        for(auto x : nums3){
            if(!visit.count(x)){
                visit.insert(x);
                table[x]++;
            }
        }
        for(auto it : table)
            if(it.second >= 2)
                res.push_back(it.first);
        return res;
    }
};
// @lc code=end
