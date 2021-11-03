/*
 * @lc app=leetcode id=985 lang=cpp
 *
 * [985] Sum of Even Numbers After Queries
 */

// @lc code=start
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> ans;
        // ans.reserve(querires.size());
        int even = 0;
        for(auto x : A) 
            if(!(x & 1)) 
                even += x;
        for(auto q : queries){
            int after = A[q[1]] + q[0];
            if(!(after & 1)) even += after;
            if(!(A[q[1]] & 1)) even -= A[q[1]];
            A[q[1]] = after;
            ans.push_back(even);
        }
        return ans;
    }
};
// @lc code=end
