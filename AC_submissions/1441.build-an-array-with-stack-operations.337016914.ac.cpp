/*
 * @lc app=leetcode id=1441 lang=cpp
 *
 * [1441] Build an Array With Stack Operations
 */

// @lc code=start
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int end = target.back();
        int p = 0;
        for(int i = 1; i <= n; i++){
            if(i != target[p]){
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            else{
                ans.push_back("Push");
                p++;
            }
            if(p == target.size())
                break;
        }
        return ans;
    }
};
// @lc code=end
