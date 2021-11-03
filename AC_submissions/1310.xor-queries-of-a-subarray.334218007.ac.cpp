/*
 * @lc app=leetcode id=1310 lang=cpp
 *
 * [1310] XOR Queries of a Subarray
 */

// @lc code=start
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>preffix;
        vector<int>ans;
        int mask = 0;
        for(int i = 0; i < arr.size(); i++)
            preffix.push_back(mask ^= arr[i]);
        for(auto q : queries){
            if(q[0])
                ans.push_back(preffix[q[0]-1] ^ preffix[q[1]]);
            else
                ans.push_back(preffix[q[1]]);
        }
        return ans;
    }
};
// @lc code=end
