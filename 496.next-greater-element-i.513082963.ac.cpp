/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>table;
        int* dp = new int[nums2.size()];
        for(int i = 0; i < nums2.size(); i++)
            table[nums2[i]] = i;
        dp[nums2.size()-1] = -1;
        stack<int>st;
        st.push(nums2.back());
        for(int i = nums2.size() - 2; i >= 0; i--){
            while(!st.empty() and nums2[i] > st.top()) st.pop();
            if(!st.empty() and st.top() > nums2[i])
                dp[i] = st.top();
            else dp[i] = -1;
            st.push(nums2[i]);
        }
        vector<int>ans(nums1.size(), 0);
        for(int i = 0; i < nums1.size(); i++){
            ans[i] = dp[table[nums1[i]]];
        }
        return ans;
    }
};
// @lc code=end
