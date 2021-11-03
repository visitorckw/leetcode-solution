/*
 * @lc app=leetcode id=1233 lang=cpp
 *
 * [1233] Remove Sub-Folders from the Filesystem
 */

// @lc code=start
class Solution {
public:
    vector<string> ans;
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        ans.push_back(folder[0]);
        for(int i = 1; i < folder.size(); i++){
            string t = ans.back() + "/";
            if(folder[i].find(t) == string::npos)
                ans.push_back(folder[i]);
        }
        
        return ans;
    }
};
// @lc code=end
