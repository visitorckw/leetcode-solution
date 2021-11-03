/*
 * @lc app=leetcode id=697 lang=cpp
 *
 * [697] Degree of an Array
 */

// @lc code=start
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> L;
        unordered_map<int, int> R;
        unordered_map<int, int> ctr;
        int degree = 0;
        vector<int> vec;
        for(int i = 0; i < nums.size(); i++){
            if(L.find(nums[i]) == L.end())
                L[nums[i]] = i;
            R[nums[i]] = i;
            if(++ctr[nums[i]] > degree){
                vec.clear();
                degree = ctr[nums[i]];
                vec.push_back(nums[i]);
            }
            else if(ctr[nums[i]] == degree)
                vec.push_back(nums[i]);
        }
        int ans = INT_MAX;
        for(auto x : vec){
            ans = min(ans, R[x] - L [x] + 1);
        }
        return ans;
    }
};
// @lc code=end
