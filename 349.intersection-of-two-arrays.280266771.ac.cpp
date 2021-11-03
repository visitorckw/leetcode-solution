/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int>ans;
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i = 0, j = 0; i < nums1.size() && j < nums2.size();)
        {
            if(nums1[i] < nums2[j])
                i++;
            else if(nums1[i] > nums2[j])
                j++;
            else
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        if(ans.empty())
            return ans;
        int pre = ans.front();
        for(int i = 1; i < ans.size(); i++)
        {
            if(ans[i] == pre)
            {
                ans.erase(ans.begin()+i);
                i--;
            }
            else pre = ans[i];
        } 
        return ans;
    }
};
// @lc code=end
